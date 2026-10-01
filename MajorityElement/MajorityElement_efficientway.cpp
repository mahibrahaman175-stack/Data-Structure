#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
    vector<int> arr= {1,3,3,2,1,1,1,1,2};
    sort(arr.begin(), arr.end());    
    int count=1; int ans=arr[0];
    for(int i=1; i< arr.size(); i++){
        if(arr[i]==arr[i-1]){
            count++;
        }else{
            count=1;
            ans=arr[i];
        }

        if(count>arr.size()/2){
           cout<<ans<<endl;
           return 0;
        }
    }  
    
   cout<<-1<<endl;
   return 0;






}