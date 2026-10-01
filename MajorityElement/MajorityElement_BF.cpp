#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> arr={ 1,2,2,3,1,1,1};
    for(int i=0; i<arr.size(); i++){
        int count=0;
        for(int j=0;j<arr.size(); j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>arr.size()/2){
            cout<<arr[i]<<endl;
            return 0;
        }
    }

    return -1;

}