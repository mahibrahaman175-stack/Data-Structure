#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; int k;
        cin>>n>>k;
        
        int result=pow(2,n-k+1)+2*(k-1);
        cout<<result<<endl;

        


    }
    return 0;
}