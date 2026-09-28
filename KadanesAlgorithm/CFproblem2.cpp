#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        long long y=0;
        for(int i=0; i<n;i++){
            y+=arr[i];
        }

        long long currentSum=0;
        long long maxSuffix=LLONG_MIN;

        for(int i=1; i<n; i++){
            currentSum+=arr[i];
            maxSuffix=max(maxSuffix, currentSum);
            if(currentSum<0){
                currentSum=0;
            }
        }

           currentSum=0;
           long long maxPrefix=LLONG_MIN;

        for(int i=0; i<n-1; i++){
            currentSum+=arr[i];
            maxPrefix=max(maxPrefix, currentSum);
            if(currentSum<0){
                currentSum=0;
            }
        }
        
        long long ans=max(maxSuffix, maxPrefix);
        
        if(y>ans){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }

    
    }
    return 0;
}