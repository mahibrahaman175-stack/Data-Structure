// Heap-Sort. For heap-sort, we will first need to convert a binary tree into a Max-Heap. After that, we will remove elements from the max heap. And then, by doing so, it will automatically get sorted.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void heapify(vector<int>&arr, int n, int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }

    if(largest!=i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }

}

void heapSort(vector<int>  &arr){
    int n=arr.size();
    // turning the binary tree into a max heap
    for(int i=n/2-1; i>=0; i--){
        heapify(arr,n,i);
    }

    // removing elements from the max heap and getting sorted  
    for(int i=n-1; i>=0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }

}

int main(){
    vector<int> brr={90, 15, 10, 7, 12, 2};
    heapSort(brr);
    cout<<"Sorted array is:";
    for(int x: brr){
        cout<<x<<" ";
    }
    return 0;
}
