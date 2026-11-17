#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class List{
    Node* head;
    Node*tail;
    public:
    List(){
        head=tail=NULL;
    }


    void push_back(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    bool search(int key){
        Node* temp=head;
         

        while(temp!=NULL){
            if(temp->data==key){
                return true;
            }
             
            temp=temp->next;
        } 
        return false;
    }



    void remove(int val){

            if(head==NULL){
                return;
            }

            if(head->data==val){
                Node* temp=head;
                head=head->next;
                delete temp;

                if(head==NULL){
                    tail=NULL;
                }

                return;
            }

            Node* temp=head;

            while(temp->next!=NULL && temp->next->data!=val){
                temp=temp->next;
            }

            if(temp->next==NULL){
                return;
            }

            Node* delNode=temp->next;
            temp->next=delNode->next;

            if(delNode==tail){
                tail=temp;
            }

            delete delNode;
        }



        void print_ll(){
            Node*temp=head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }


        int count(){
            int count=0;
            Node* temp=head;
            while(temp!=NULL){
                count++;
                temp=temp->next;
            }

            return count;
        }
};


int main(){
    List ll;
    int n; cin>>n;
    int m; cin>>m;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        ll.push_back(x);
    }

    int arr[m];
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }

    for(int i=0; i<m; i++){
        if(ll.search(arr[i])){
            ll.remove(arr[i]);
        }
    }

    cout<<ll.count()<<endl;

    if(ll.count()>0){
        ll.print_ll();
    }
}
