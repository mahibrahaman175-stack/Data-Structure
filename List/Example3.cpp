/*Here, we will see about how to 'sort' and 'merge' lists. Sorting is done by the help
of sort function and merging is done by the help of merge function. Lets see them */

#include<iostream>
#include<list>
#include<algorithm>

using namespace std;
int main(){
    list<int> lst1;
      lst1.push_back(4);
       lst1.push_back(9);
         lst1.push_back(6);
           lst1.push_back(1);
             lst1.push_back(7);
               lst1.push_back(8); 

                //before sorting
                for(int x: lst1){
                    cout<<x<<" ";
                }
                lst1.sort(); 
                cout<<endl;

                //after sorting 
                for(int x: lst1){
                    cout<<x<<" ";
                }

                cout<<endl;

    list<int>lst2;   
     lst1.push_back(21);
       lst2.push_back(39);
         lst2.push_back(36);
           lst2.push_back(41);
             lst2.push_back(87);
               lst2.push_back(98); 

    // merge the lst1(sorted) with the lst2
    
    // lst1 after merging 
    lst1.merge(lst2);
    for(int x: lst1){
        cout<<x<<" ";
    } 


}