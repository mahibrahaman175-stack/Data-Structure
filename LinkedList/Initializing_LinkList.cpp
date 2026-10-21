/*So, as we have said earlier that, we will do link list from the beginning, that is from the scratch. 
  So, we are gonna make 2 classes, separately. One for the 'node' class and the other for the 'list' class.
 */

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
 };

 int main(){
    return 0;
 }