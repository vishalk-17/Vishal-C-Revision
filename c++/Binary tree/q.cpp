//You are given a BST, find the elements in the tree under a given range.

#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};

std::vector<int> range_in_bst(TreeNode* root, int lower, int upper) {
    std::vector<int> result;
    if (root == nullptr) {
        return result;
    }

    if (lower <= root->val && root->val <= upper) {
        result.push_back(root->val);
    }

    if (root->val > lower) {
        auto left_result = range_in_bst(root->left, lower, upper);
        result.insert(result.end(), left_result.begin(), left_result.end());
    }

    if (root->val < upper) {
        auto right_result = range_in_bst(root->right, lower, upper);
        result.insert(result.end(), right_result.begin(), right_result.end());
    }

    return result;
}

int main() {
    // Example usage:
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);

    int lower = 5;
    int upper = 12;
    std::vector<int> result = range_in_bst(root, lower, upper);

    std::cout << "Values in the range [" << lower << ", " << upper << "]: ";
    for (int val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Clean up memory (not shown in the original snippet)
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
