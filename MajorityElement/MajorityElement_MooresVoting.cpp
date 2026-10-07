#include<iostream>
#include<vector>
//hellogg
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int freq=0; int ans=0;
    for(int i=0; i<n; i++){
        if(freq==0){
            ans=arr[i];
            freq=1;
        }else if(arr[i]==ans){
            freq++;
        }else{
            freq--;
        }
    }
    cout<<"Majority element is:"<<ans<<endl;

    return 0;
}