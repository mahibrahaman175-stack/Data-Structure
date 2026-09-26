#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n=5;
   int arr[5]={1,2,3,4,5};

   for(int strt=0; strt<n; strt++){
    for(int end=strt; end<n; end++){

        for(int i=strt; i<=end; i++){
            cout<<arr[i] ;
        }
          cout<<" ";
    }
    cout<<endl;
   }
   return 0;
}