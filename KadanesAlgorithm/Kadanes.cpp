#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5,};

    int currentSum=0;
    int maxSum=INT_MIN;

    for(int i=0;i<n; i++){
        currentSum+=arr[i];
        maxSum=max(maxSum, currentSum);
        if(currentSum<0){
            currentSum=0;
        }

    }

    cout<<"Maximum subarray sum  is: "<<maxSum;

    return 0;


}
