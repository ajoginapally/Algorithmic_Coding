#include <bits/stdc++.h>
using namespace std;
#define vi vector<vector<int>>
struct TreeNode {
      int val;
     TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
vi pathSum(TreeNode *root, int targetSum, vector<vector<int>> ans) {
    if (root == nullptr) return ans;
    vector<int> curPath;
    curPath.push_back(root->val);
    helper(root, targetSum - root->val, curPath, ans);
    pathSum(root->left, targetSum, ans);
    pathSum(root->right, targetSum, ans);
    return ans;
}

void helper(TreeNode *node, int target, vector<int> &curPath, vector<vector<int>> &ans) {
    if (node == nullptr) return;
    if (target == 0 && node->left == nullptr && node->right == nullptr) {
        ans.push_back(curPath);
        return;
    }
    helper(node->left, target - node->val, curPath, ans);
    helper(node->right, target - node->val, curPath, ans);
    curPath.pop_back(); // backtrack
}

vi pathSum(TreeNode* root, int targetSum) {
    vector<vector<int>> ans;
    return pathSum(root, targetSum, ans);
}