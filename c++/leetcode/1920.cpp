//1920. Build Array from Permutation

#include<iostream>
#include<vector>
using namespace std;
vector<int>buildArray(vector<int>&nums){

    // [0,1,2] ans[i]= nums[nums[i]]
    //[0,2,1]
    
    // 1st iteration
    //ans[0] = nums[nums[0]]
    //ans[0] = nums[0]= 0

    //2nd iteration
    // ans[1]= nums[nums[1]]
    // ans[1]= nums[2] = 1

    // 3rd iteration 
    // ans[2]= nums[nums[2]]
    // ans[2]= nums[1]
    // ans[2]= 2

    int n = nums.size();
    vector<int>ans(n,0);
    for(int i=0;i<n;i++){
        ans[i] = nums[nums[i]];
    }
    return ans;
}
int main(){
    vector<int>nums={0,2,1,5,3,4};
    vector<int>ans= buildArray(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

