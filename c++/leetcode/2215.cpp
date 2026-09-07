
//2248. Intersection of Multiple Arrays

/*Given a 2D integer array nums where nums[i] is a non-empty array of distinct positive integers, 
return the list of integers that are present in each array of nums sorted in ascending order.
 

Example 1:

Input: nums = [[3,1,2,4,5],[1,2,3,4],[3,4,5,6]]
Output: [3,4]
Explanation: 
The only integers present in each of nums[0] = [3,1,2,4,5], nums[1] = [1,2,3,4], and nums[2] = [3,4,5,6] are 3 and 4, so we return [3,4].
Example 2:

Input: nums = [[1,2,3],[4,5,6]]
Output: []
Explanation: 
There does not exist any integer present both in nums[0] and nums[1], so we return an empty list [].

*/
#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            for(auto &it:nums[i]){
                mp[it]++;
            }
        }
        for(auto &it:mp){
            if(it.second==n)
              ans.push_back(it.first);
        }
        return ans;
    }
};
int  main(){
    Solution obj = Solution();
    vector<vector<int>>nums={{3,1,2,4},{1,2,3,4},{3,4,5,6}};
    vector<int>ans=obj.intersection(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
