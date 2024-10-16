#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string word) {
    if (word.length() == 0) return true;
    if (word.length() == 1) return true;
    int start = 0, end = word.length() - 1;
    while (word[start] == word[end] && start < end) {
        start++; end--;
    }
    return start == end || start +1 == end;
}
string longestPalindrome(string s) {
    string ans = "";
    for (int i = 0; i < s.length(); i++) {
        int index = i + 1;
        string temp = s.substr(i, index-i);
        while (isPalindrome(temp)) {
            temp = s.substr(i, ++index-i);
        }
        ans = temp.length() > ans.length() ? temp:ans;
    }
    return ans;
}

vector<int> searchRange(vector<int> &nums, int target) {
    int low = 0, high = nums.size()-1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            int left = mid, right = mid;
            while (left > 0 && nums[left-1] == target) {
                left--;
                
            }

            while (right < nums.size() && nums[right+1] == target) {
                right++;
            }
            return {left, right};
            
        } else if (nums[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return {-1, -1};
}
int main() {
    cout << longestPalindrome("babad") << endl;
    return 0;
}