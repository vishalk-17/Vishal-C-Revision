#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(const string& word) {
    int left = 0, right = word.length() - 1;
    while (left < right) {
        if (word[left] != word[right])
            return false;
        left++;
        right--;
    }
    return true;
}

vector<vector<int>> palindromePairs(vector<string>& words) {
    unordered_map<string, int> wordIndex;
    vector<vector<int>> result;

    // Create a map of word to index
    for (int i = 0; i < words.size(); i++) {
        wordIndex[words[i]] = i;
    }

    for (int i = 0; i < words.size(); i++) {
        for (int j = 0; j <= words[i].length(); j++) {
            string left = words[i].substr(0, j);
            string right = words[i].substr(j);

            if (isPalindrome(left)) {
                string reversedRight = right;
                reverse(reversedRight.begin(), reversedRight.end());

                if (wordIndex.find(reversedRight) != wordIndex.end() && wordIndex[reversedRight] != i) {
                    result.push_back({wordIndex[reversedRight], i});
                }
            }

            if (!right.empty() && isPalindrome(right)) {
                string reversedLeft = left;
                reverse(reversedLeft.begin(), reversedLeft.end());

                if (wordIndex.find(reversedLeft) != wordIndex.end() && wordIndex[reversedLeft] != i) {
                    result.push_back({i, wordIndex[reversedLeft]});
                }
            }
        }
    }

    return result;
}

int main() {
    vector<string> words = {"abcd", "dcba", "lls", "s", "sssll"};
    vector<vector<int>> result = palindromePairs(words);

    for (const auto& pair : result) {
        cout << "[" << pair[0] << ", " << pair[1] << "] ";
    }
    cout << endl;

    return 0;
}

