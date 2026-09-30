#include<iostream>
#include<vector>

using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    int n=nums.size();
    int i=0; int j=n-1;

    vector<int> ans;
    
    while(i<j){
        int pairSum=nums[i]+nums[j];
        if(pairSum>target){
            j--;
        }else if(pairSum<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;

        }
    }

    return ans;
}

int main(){
    vector<int> nums={4,5,8,9,10};
    int target=17;

    vector<int> result=pairSum(nums, target);
    cout<<result[0]<<" , "<<result[1];
    
    return 0;
}