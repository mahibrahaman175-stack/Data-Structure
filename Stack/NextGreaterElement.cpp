#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }


    vector<int> ans(v.size(), 0);
    stack<int> st;

    for(int i=v.size()-1; i>=0; i--){
        while(st.size()>0 && st.top()<=v[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=-1;
        }else{
            ans[i]=st.top();
        }
        st.push(v[i]);
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}