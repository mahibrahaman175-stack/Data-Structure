 #include<iostream>

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
        Node* newNode= new Node(val); //Created a new node(step 1)
        if(head==NULL){
            head=tail=newNode;       // Pointed the head and tail pointer to the new node(Step 2)  
            return; 
        }else{
            newNode->next=head;      //'->' meant that, we know, newNode is a pointer, so, we dereferenced the newnNode and used its next property and pointed to the head
            head=newNode;
        } 
      }
 };

 int main(){

    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    
    return 0;
 }