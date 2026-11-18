#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(10);
    s.push(49);

    cout<<s.top()<<endl;
   
    //s.peek();
    
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}