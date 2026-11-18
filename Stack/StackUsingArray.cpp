#include<iostream>
using namespace std;

class Stack{
    int arr[5]; // fixed sized stack we wanna implement 
    int top;

    public:
    Stack(){    // declaring the constructor
        top=-1;
    }

    void push(int val){
        if(top==4){
            cout<<"Stack Overflow"<<endl;
            return; 
        }
        top++;
        arr[top]=val;
    }


    void pop(){
        if (top==-1){
            cout<<"stack underflow"<<endl; 
            return; 
        }
        top--;
    }

    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }


} ;


int main(){
    Stack s;
    s.push(1);
    s.push(10);
    s.push(59);
    
    while(!s.empty()){
        cout<<s.peek()<<" ";
        s.pop();
    }

    cout<<endl;

    return 0; 
}