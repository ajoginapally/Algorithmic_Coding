#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string &word1, string &word2) {
    if (word1.size() != word2.size()) {
        return false;
    }

    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());
    return word1 == word2;
}
unordered_map<string, vector<string>> groupAnagrams(vector<string> &words) {
    unordered_map<string, vector<string>> mp;
    int ans = 0;
    for (string &word : words) {
        string temp = word;
        sort(temp.begin(), temp.end());
        if (mp.find(temp) != mp.end()) {
            mp[temp].push_back(word);
        } else {
            
            vector<string> vals;
            vals.push_back(word);
            mp.insert({temp, vals});
        }
    }

    return mp;
}

bool isPaldindromeRecusive(string word) {
    if (word.length() == 0 || word.length() == 1) {
        return true;
    }

    if (word[0] != word[word.length() - 1]) {
        return false;
    }
    return isPaldindromeRecusive(word.substr(1, word.length() - 2));
}

bool isPalindrome(string word) {
    int i = 0, j = word.length() - 1;
    while (i < j) {
        if (word[i]!= word[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

vector<int> twoSum(vector<int> nums, int target) {
    unordered_map<int, int> mp;
    
    for (int i = 0; i < nums.size(); i++) {
        int diff = target - nums[i];
        if (mp.find(diff)!= mp.end()) {
            return {mp[diff], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}

vector<string> summaryRanges(vector<int> &nums) {
    vector<string> ans;
    
    for (int i = 0; i < nums.size(); i++) {
        if (i == 0) {
            ans.push_back(to_string(nums[i]));
        } else if (nums[i] == nums[i - 1] + 1) {
            ans[ans.size() - 1] = ans[ans.size() - 1].substr(0, ans[ans.size() - 1].length()-3);
            ans[ans.size() - 1] += "->" + to_string(nums[i]);
        } else {
            ans.push_back(to_string(nums[i]));
        }
    }
    return ans;
}
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {} 
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *head = new ListNode(0);
    ListNode *p = head;
    int carry = 0;
    while (l1 || l2 || carry) {
        int x = l1? l1->val : 0;
        int y = l2? l2->val : 0;
        int sum = x + y + carry;
        carry = sum / 10;
        p->next = new ListNode(sum % 10);
        p = p->next;
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }
    ListNode* ans = head->next;
    delete head;
    return ans;

}
int main() {
    
    
    return 0;
}