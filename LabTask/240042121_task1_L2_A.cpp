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
    Node* tail;

    public:
    List(){
        head=tail=NULL;
        
    } 

    void push_front(int val){
        Node *newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }

    void print_ll(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next; 
        }
        cout<<endl;
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

    void insert(int val, int pos){
         
        if(pos==1){
          push_front(val);
          return; 
        }
         
        Node* temp=head;
        for(int i=1; i<pos-1 && temp!=NULL; i++){
              temp=temp->next;
        }
        Node* newNode= new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;

        if(temp==tail){
          tail=newNode;
        }
      }

      void remove_at(int pos){

            if(pos<1 || head==NULL){
                return;
            }

            if(pos==1){
                Node* temp=head;
                head=head->next;
                delete temp;

                if(head==NULL){
                    tail=NULL;
                }

                return;
            }

            Node* temp=head;

            for(int i=1; i<pos-1 && temp!=NULL; i++){
                temp=temp->next;
            }

            if(temp==NULL || temp->next==NULL){
                return;
            }

            Node* delNode=temp->next;
            temp->next=delNode->next;

            if(delNode==tail){
                tail=temp;
            }

            delete delNode;
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




      void search(int key){
        Node*temp=head;
        int index=0;
        while(temp!=NULL){
          if(temp->data==key){
             cout<<index<<endl;
          }
          index++;
          temp=temp->next;
        }
      }



};


int main(){
    List ll;
     int q;
    cin>>q;

    while(q--){
      char op;
      cin>>op;

      if(op=='F'){
            int x;
            cin>>x;
            ll.push_front(x);
        }

        else if(op=='B'){
            int x;
            cin>>x;
            ll.push_back(x);
        }

        else if(op=='I'){
            int k,x;
            cin>>k>>x;
            ll.insert(x,k);
        }

        else if(op=='R'){
            int k;
            cin>>k;
            ll.remove_at(k);
        }

        else if(op=='D'){
            int x;
            cin>>x;
            ll.remove(x);
        }

        else if(op=='S'){
            int x;
            cin>>x;
            ll.search(x);
        }

        else if(op=='P'){
            ll.print_ll();
        }

      

       
    }

    return 0;
 
}