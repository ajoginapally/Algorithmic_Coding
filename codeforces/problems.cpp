#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    if (x < 0) {
        return false;
    } else if (x < 10) {
        return true;
    }

    int rev = 0;
    int temp = x;
    while (temp!= 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    return rev == x;
}
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
// int maxDepth(TreeNode* root, int depth) {

// }

int maxDepth(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}

bool isBalanced(TreeNode* root) {
    // if (root == nullptr) {
    //     return true;
    // } 
    // if (root->val < root->left->val || root->val > root->right->val) {
    //     return false;
    // }
    
    // return isBalanced(root->left) && isBalanced(root->right);

    if (root == nullptr) {
        return true;
    }
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    if (abs(left - right) > 1) {
        return false;
    }
    return isBalanced(root->left) && isBalanced(root->right);
    
}

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
bool isPalindrome(ListNode* head) {
    ListNode* temp = head;
    queue<int> nums;
    while (temp) {
        nums.push(temp->val);
        temp = temp-> next;
    }

    ListNode* temp2 = head;
    while (temp2) {
        if (temp2-> val != nums.front()) {
            return false;
        }
        nums.pop();
        temp2 = temp2->next;
    }
    return true;
}

bool isValidSudoku(vector<vector<char>>& board) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    set<char> rows, cols;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            rows.insert(board[i][j]);
            cols.insert(board[j][i]);
        }

        if (rows.size() != 9 || cols.size() != 9) {
            return false;
        }
        rows.clear();
        cols.clear();
    }
    return true;
}

int main() {

}