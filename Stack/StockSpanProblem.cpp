#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    } 

    vector<int> span(v.size(), 0);
    stack<int> st;

    for(int i=0; i<n; i++){
        while(st.size()>0 && v[st.top()]<=v[i]){
            st.pop();
        }

        if(st.empty()){
            span[i]=i+1;
        }else{
            span[i]=i-st.top();
        } 

        st.push(i); 
    }
    
    for(int i=0; i<span.size(); i++){
        cout<<span[i]<<" ";
    }
    
    cout<<endl;
    return 0;
}