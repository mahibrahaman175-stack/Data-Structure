#include<iostream>
#include<vector>
#include<stack>

using namespace std;
vector<int> prevSmallerElement(vector<int> arr){

    vector<int> ans(arr.size(), 0);
    stack<int> st;

    for(int i=arr.size()-1; i>=0; i--){
        while(st.size()>0 && st.top()>=arr[i]){
            st.pop();
        }

        if(st.empty()){
           //ans[i]=-1;
             ans[i]=st.top();
        } 

        st.push(arr[i]);


    }

    return ans;
}


int main(){
    vector<int> arr={1,6,2};
    vector<int> ans= prevSmallerElement(arr);

    for(int val: ans){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0; 
}