#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int maxSum=0;

    for(int strt=0; strt<n; strt++){
        int currentSum=0;
        for(int end=strt; end<n; end++){
            currentSum+=arr[end];
            maxSum=max(maxSum, currentSum);
        }
    }
    cout<<"Maximum subarray sum is:"<<maxSum;

    return 0;

}