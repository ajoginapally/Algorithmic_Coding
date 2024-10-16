// #include <bits/stdc++.h>
// using namespace std;

// bool uniqueOccurences(vector<int> arr) {
//     unordered_map<int, int> mp;
//     set<int> ans;
//     for (auto &it: arr) {
//         mp[it]++;
//     }

//     for (auto &it: mp) {
//         ans.insert(it.second);
//     }

//     for (int x: ans) {
//         cout << x << endl;
//     }
//     return ans.size() == mp.size();
// }

// bool increasingTriplet(vector<int> nums) {
//     int n = nums.size();
//     if (n < 3) {
//         return false;
//     }

//     int first = INT_MAX, second = INT_MAX;
//     for (int i = 0; i < n; i++) {
//         if (nums[i] <= first) {
//             first = nums[i];
//         } else if (nums[i] <= second) {
//             second = nums[i];
//         } else {
//             return true;
//         }
//     }
//     return false;
        
// }

// int lengthOfLastWord(string s) {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int n = s.size()-1;
//     int ans = 0;
//     while (n >= 0 && s[n] ==' ') {
//         n--;
//     }

//     while (n >= 0 && s[n]!=' ') {
//         n--;
//         ans++;
//     }
//     return ans;
// }


// bool isCommon(vector<string> words) {
//     char letter = words[0][0];
//     for (int i = 1; i < words.size(); i++) {
//         if (words[i][0]!= letter) {
//             return false;
//         }
//     }

//     return true;
// }
// string longestCommonPrefix(vector<string> strs) {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     int size = 0;
//     string ans = "";
//     if (strs[0].size() == 0 || !isCommon(strs)) {
//         return "";
//     }
//     if (strs.size() == 1) {
//         return strs[0];
//     }

//     for (int i = 1; i < strs.size(); i++) {
//         // // if (!(ans == strs[i].substr(0, ans.size()))) {
//         // //     return ans;
//         // // } else {
//         // //     ans = strs[0].substr(0, ans.size()+1);
//         // // }
//         // while (ans == strs[i].substr(0, ans.size())) {}
        
//     }
//     return ans;
// }

// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

// TreeNode* balance(vector<int> nums, int start, int end) {
//     if (start > end) {
//         return nullptr;
//     }
//     int mid = start + (end - start) / 2;
//     TreeNode* root = new TreeNode(nums[mid]);
//     root->left = balance(nums, start, mid - 1);
//     root->right = balance(nums, mid + 1, end);
//     return root;
// }

// TreeNode* sortedArrayToBST(vector<int> nums) {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     return balance(nums, 0, nums.size() -1);
// }

// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

// ListNode* sortList(ListNode* head) {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     vector<int> nums;
//     ListNode* temp = head;
//     while (temp!= nullptr) {
//         nums.push_back(temp->val);
//         temp = temp->next;
//     }
//     sort(nums.begin(), nums.end());
//     int counter = 0;
//     ListNode* ans;
//     while (counter < nums.size()) {
//         ans->val = nums[counter++];
//         ans = ans->next;
//     }
//     return ans;
// }

// bool canConstruct(string r, string m) {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     unordered_map<char, int> mp1;
//     unordered_map<char, int> mp2;
//     for (int i = 0; i < r.size(); i++) {
//         mp1[r[i]]++;
//     }

//     for (int i = 0; i < m.size(); i++) {
//         mp2[m[i]]++;
//     }

//     for (auto &it: mp1) {
//         if (mp2[it.first] < it.second) {
//             return false;
//         }
//     }
//     return true;


// }

// // int longestSub(string s) {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(nullptr);
// //     cout.tie(nullptr);
// //     vector<char> tmp;
// //     int maxLen = INT_MIN;
// //     for (int i = 0; i < s.length(); i++) {
// //         int temp = i;
// //         int res = 0;
// //         while ( !(tmp.find(tmp.begin(), tmp.end(), s[temp]) != tmp.end() ) && temp < s.size()) {
// //             tmp.push_back(s[temp]);
// //             temp++;
// //             res ++;
// //         }

// //         maxLen = max(maxLen, res);
// //     }
// //     return maxLen;
// // }
// int main() {
//     string s = "abcabcbb";
//     cout << longestSub(s) << endl;
//     return 0;
// }