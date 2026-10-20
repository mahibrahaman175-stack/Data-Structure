/*In this example, we will see how to insert elements inside a list and print them. In order to 
  insert elements inside the list, you will have to follow some certain syntax. You can insert
  elements inside a list by:
  1. push_back---> add elements at the end
  2. push_front---> add elements at the front
  3. insert---> add elements to a certain index
  
  and if you want to print the elements, you cannot use loop since list doesnt allow 
  you to use it like list[i] like we do in vec[i]. So, there are two process to print
  the elements, one is 1. Range based loop,  2. Using iterator */
  
  #include<iostream>
  #include<list>

  using namespace std;
  int main(){
    list<int> lst1;
    // using push_back
    lst1.push_back(4);
      lst1.push_back(9);
        lst1.push_back(3);
          lst1.push_back(2);
            lst1.push_back(7);
    
    // using range based loop to print the elements(recommended)
    for(int x: lst1){
       cout<<x<<" ";
    } 

    cout<<endl;

    list<int> lst2;
    // using push_front
    lst2.push_front(9);
     lst2.push_front(4);
      lst2.push_front(5);
       lst2.push_front(8);
        lst2.push_front(1);

    // using iterator to print the elements
    for(auto it= lst2.begin(); it != lst2.end(); it++){
        cout<<*it<<" ";
    }    
    return 0;       
  }