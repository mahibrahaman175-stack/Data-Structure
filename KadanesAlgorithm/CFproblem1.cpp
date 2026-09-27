#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long  arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    long long currentSum=0;
    long long  maxSum=LLONG_MIN;
    
    for(int i=0; i<n; i++){
        currentSum+=arr[i];
        maxSum=max(maxSum, currentSum);
        if(currentSum<0){
            currentSum=0;
        }
    }
    cout<<maxSum;
    return 0;
}
