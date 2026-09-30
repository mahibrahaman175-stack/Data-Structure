#include<iostream>
#include<vector>

using namespace std;

 pair<int,int> pairSum(vector<int> nums, int target){
    //vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
     
}
int main(){
   vector<int> nums={1,2,3,4,5};
    int target=6;
    pair<int,int> result=pairSum(nums, target);
    cout<<result.first<<" , "<<result.second;
    return 0;


} 

// return type first e vector chilo, tay vector disi
// return type erpor pair disi, tay pair disi; 