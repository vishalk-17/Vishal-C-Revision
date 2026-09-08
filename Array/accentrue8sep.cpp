#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&nums){
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        // step 1: calculate the value of m based on the current index and the value at that index
        int m = nums[i]-(i%7)*3;
        // step 2: add the value of m to the sum
         if(nums[i]%11==0){
            m += nums[i]/11;
         }
         sum += m;

    }
    return sum;
}
int main(){
    // vector<int>nums={22,5,19};
    // cout<<solve(nums)<<endl;

    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"The Result is :"<<solve(nums)<<endl;
    return 0;
}
