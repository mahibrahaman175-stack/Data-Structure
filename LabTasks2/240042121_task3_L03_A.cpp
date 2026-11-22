#include<iostream>
#include<stack>
#include<vector>

using namespace std;
int main(){
    int n; cin>>n;
    vector<int> vec(n);

    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    stack<int> st;
    int index=1;

    for(int i=0; i<n; i++){
        if(vec[i]==index){
            index=index+1;
        }else{
            st.push(vec[i]);
        }

          while(st.size()>0 && st.top()==index){
         st.pop();
         index=index+1;
    }

    }
    

   // cout<<index<<endl; 
    if(index==n+1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
