// Finding the kth largest element (naive approach).
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> arr={4,10, 9, 5, 8, 3, 1};
    int k=2;
    sort(arr.begin(), arr.end(), greater<int>());

    cout<<arr[k-1]<<endl;
    return 0;
}