
/*
1331. Rank Transform of an Array
Solved
Easy
Topics
Companies
Hint
Given an array of integers arr, replace each element with its rank.

The rank represents how large the element is. The rank has the following rules:

Rank is an integer starting from 1.
The larger the element, the larger the rank. If two elements are equal, their rank must be the same.
Rank should be as small as possible.
 

Example 1:

Input: arr = [40,10,20,30]
Output: [4,1,2,3]
Explanation: 40 is the largest element. 10 is the smallest. 20 is the second smallest. 30 is the third smallest.
Example 2:

Input: arr = [100,100,100]
Output: [1,1,1]
Explanation: Same elements share the same rank.
*/

#include<bits/stdc++.h>
using namespace std;

    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        if(n==0)
         return {};
        set<int>a(arr.begin(),arr.end());
        unordered_map<int,int>ranks;
        int rank=1;
        for(const int &ele:a)
          ranks[ele]=rank++;
         vector<int>ans;
         for(int &ele:arr)
          ans.push_back(ranks[ele]);
         return ans;
    }
int main(){
     vector<int> arr = {40, 10, 20, 30};
    vector<int> result = arrayRankTransform(arr);  // Call the function

    // Output the result
    for (int &x : result)
        cout << x << " ";
    cout << endl;
    return 0;
}