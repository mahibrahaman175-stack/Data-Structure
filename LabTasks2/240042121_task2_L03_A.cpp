#include<iostream>
#include<vector>
#include<stack>


using namespace std;
int main(){
 int n; cin>>n;
 string s; cin>>s;

 stack<char> st;
 //int top=-1;

 for(int i=0; i<n; i++){


    if(st.empty()){
      st.push(s[i]);
      //top++;
    }

    else if(st.top()==s[i]){
      st.pop();
      //top--;
    }

    else{
      st.push(s[i]);
      //top++;
    }

 }

 if(st.empty()){
  cout<<"empty"<<endl;
 }else{ 
  vector<char> vc;  
   while(!st.empty()){

     vc.push_back(st.top());
     st.pop();
    /*cout<<st.top();
    st.pop();*/     //--this approach is printing the stack in reverse order, we dont want that. 
   }

   for(int i=vc.size()-1; i>=0; i--){
    cout<<vc[i];
   }
 }

 return 0;



}
