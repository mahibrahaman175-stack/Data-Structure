 // Finding the Kth largest element (expected approach, using the Priority queue)

 #include<bits/stdc++.h>
 using namespace std;

 int kthLargest(vector<int> arr, int K){
    int n=arr.size();

    priority_queue<int, vector<int>, greater<int>>pq;

    for(int i=0; i<n; i++){
        pq.push(arr[i]);
        if(pq.size()>K){
            pq.pop();
        }  
    }

    return pq.top();
 }

 int main(){
        vector<int> arr={12,3,5,7,9};
        int K=2;

        cout<<"Kth largest element"<<kthLargest(arr,K);
        return 0;
 }