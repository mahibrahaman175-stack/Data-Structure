/*So, i have just learnt that, priority_queue automatically turns a given array
int a max heap and min heap. That, is for max heap, the priority queue ensures that
the largest element stays as its root while for min heap, the priority queue ensures 
that the smallest element stays as its roots. And while making the min heap and max 
heap, it ensures that, the heap property is maintained*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={12,3,17,8,5}; //we are gonna turn this array into a max heap and min heap

    //Max heap
    priority_queue<int> maxHeap;
    
    //Min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for(int x:arr){
        maxHeap.push(x);
        minHeap.push(x);
    }

    cout<<"Max Heap:";
    while(!maxHeap.empty()){
        cout<<maxHeap.top()<<" ";
        maxHeap.pop();
    }

    cout<<"\n Min Heap:";
    while(!minHeap.empty()){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }  

    return 0;


}