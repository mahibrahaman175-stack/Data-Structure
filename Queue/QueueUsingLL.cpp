#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val)
{
    data=val;
    next=NULL;
}
};

class Queue{
    Node*head;
    Node*tail;

    public:
    Queue(){
        head=tail=NULL;
    }


    void push(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void pop(){
        Node* temp=head;
        if(head==NULL){
            return;
        }else{
            head=head->next;
        }

        delete temp;
    }

    void front(){
        cout<<head->data<<endl; 
    }

    void print(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        } 
        cout<<endl;
    }
};

int main(){
    Queue qq;
    qq.push(4);
    qq.push(7);
    qq.push(9);

    qq.print();

    qq.front();

    qq.pop();

    qq.front();

    return 0;
}