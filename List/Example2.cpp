/*In this example, we will see how to remove or delete elements from the list. For that, we
have 3 ways:
1. pop_back--->remove elements from the back
2. pop_front--->remove elements from the front
3. remove---> remove the specific element from the list. That is, if i do remove(9), 
   then, it will remove all the 9's from the list  */

#include<iostream>
#include<list>

using namespace std;
int main(){
    list<int> lst1;
      lst1.push_back(4);
       lst1.push_back(9);
         lst1.push_back(9);
           lst1.push_back(9);
             lst1.push_back(7);
               lst1.push_back(8); 
    // Before removing
    for(int x: lst1){
        cout<<x<<" ";
    }         
       lst1.pop_back();
       lst1.pop_back( );

       lst1.remove(9);
    
    cout<<endl;   
    // After removing   
    for(int x: lst1){
        cout<<x<<" ";
    }    
   
    cout<<endl;

    list<int> lst2;
     lst2.push_front(9);
      lst2.push_front(4);
       lst2.push_front(5);
        lst2.push_front(8);
         lst2.push_front(1);

    //Before removing:
    for(int x: lst2){
        cout<<x<<" ";
    }

    lst2.pop_front();
    lst2.pop_front();
     
    cout<<endl; 
    //After removing:
    for(int x: lst2){
        cout<<x<<" ";
    }     

    return 0;
            
            
}