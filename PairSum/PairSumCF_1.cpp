#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }      

    int i=0; int j=n-1;
    int sumSereja=0;  int sumDima=0;

     for(int turn=0; turn<n; turn++){
        int cardValue=0;
          if(arr[i]>arr[j]){
            cardValue=arr[i];
            i++;
          }else{
            cardValue=arr[j];
            j--;
          }
          if(turn%2==0){
            sumSereja+=cardValue;
          }else{
            sumDima+=cardValue;
          }
     }
     cout<<sumSereja<<" "<<sumDima<<endl;
     return 0;    
} 
