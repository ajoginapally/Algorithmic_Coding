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
 
vi levelOrder(TreeNode *root, vi ans) {
    if (!root) return ans;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        ans.push_back(vector<int>(size));
        for (int i = 0; i < size; ++i) {
            TreeNode *node = q.front();
            q.pop();
            ans[ans.size() - 1][i] = node->val;
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }
}

vi levelOrder(TreeNode *root) {
    if (!root) {
        return {};
    }
    vi ans;
    return levelOrder(root, ans);
}
