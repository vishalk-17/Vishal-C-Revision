
/*567. Permutation in String

Given two strings s1 and s2, return true if s2 contains a 
permutation
 of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
 

Constraints:

1 <= s1.length, s2.length <= 104
s1 and s2 consist of lowercase English letters.

*/

#include<bits/stdc++.h>
using namespace std;
    string count_sort(string s){
        vector<int>t(26,0);
        for(auto & c:s){
            t[c-'a']++;
        }
        string ans;
        for(int i=0;i<26;++i){
            ans += string(t[i],char(i+'a'));
        }
        return ans;
    }
    bool checkInclusion(string s1, string s2) {
        s1 = count_sort(s1);
        int l =s1.size();
        for(int i=0;i+s1.size()<=s2.size();++i){
            string t = count_sort(s2.substr(i,l));
            if(t==s1)
            return true;
        }
        return false;
    }

int main(){
      string s1 = "abc";
    string s2 = "cbad";

    if (checkInclusion(s1, s2)) {
        cout << "s1 is an anagram of a substring of s2." << endl;
    } else {
        cout << "s1 is NOT an anagram of any substring of s2." << endl;
    }
   
   
    return 0;
}