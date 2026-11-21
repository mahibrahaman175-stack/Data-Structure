#include<iostream>
using namespace std;

class Stack{
     int c; 
     int arr[1000005];
     int top;
     public:
        Stack(int capacity){
            c=capacity;
            top=-1;
        }
    
        void push(int val){
            if(top==c-1){
                return;
            }
            top++;
            arr[top]=val;
        }

        void pop(){
            if(top==-1){
                return;
            }
            top--;
        }

        int peek(){
            if(top==-1){
                std::cout<<"empty"<<endl;
                return -1;
            }
            return arr[top];
        }

        bool empty(){
            return top==-1;
        }

        int size(){
            return top+1;
        }
        
        void print(){
            if(empty()){
                std::cout<<"empty"<<endl;
                return; 
            }

            for(int i=top; i>=0; i--){
                std::cout<<arr[i]<<" ";
            }

            std::cout<<endl;
        }

      
};

int main(){
    int c, q;
    cin>>c>>q;
    Stack st(c);

    
    while(q--){
        char select;
        int value;

        cin>>select; 
 

        if(select=='A'){
            cin>>value;
            st.push(value);
        }else if(select=='R'){
            st.pop();
        }else if(select=='T'){
            if(st.empty()){
                std::cout<<"empty"<< endl;
            }
            else{
                std::cout<<st.peek()<<endl;
            }
        }else if(select=='C'){
               std::cout<<st.size()<<endl;
        }
        else if(select=='P'){
               st.print();
            
        }
    }

    std::cout<<endl;
    return 0;

}