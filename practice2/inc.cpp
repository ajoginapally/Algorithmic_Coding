#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>

int arrayPairSum(vector<int> nums) {
    sort(nums.begin(), nums.end());
    int sum = 0;
    for (int i = 0; i < nums.size(); i+=2) {
        sum += nums[i];
    }

    return sum;
    
}

bool lemon(vector<int> bills) {
    if (bills[0]!= 5) {
        return false;
    }

    map<int, int> mp;
    int change = 0;
    for (int i = 0; i < bills.size(); i++) {
        if (bills[i] == 5) {
            mp[5]++;
            change += 5;
        } else {
            if (bills[i] - 5 > change) {
                return false;
            } 


        }
    }
}

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


bool sum(TreeNode *node, int targetSum) {
    if (node == nullptr) return false;

    targetSum-= node->val;
    if (node->left == nullptr && node->right == nullptr && targetSum == 0) {
        return true;
    }

    return sum(node->left, targetSum) || sum(node->right, targetSum);

}
bool hasPathSum(TreeNode* root, int targetSum) {
    return sum(root, targetSum);
}

int singleNumber(vector<int> nums) {
    map<int, int> mp;
    for (auto& it: nums) {
        mp[it]++;
    }

    for (auto& it: mp) {
        if (it.second == 1) {
            return it.first;
        }
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}