#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // given a string s, find the length of the longest substring wihout repeating characters
    int n = s.length();
    int maxLength = 0;
    unordered_map<char, int> charMap;
    int left = 0;
    for (int right = 0; right < n; right++) {
        charMap[s[right]]++;
        while (charMap[s[right]] > 1) {
            charMap[s[left]]--;
            left++;
        }
        maxLength = max(maxLength, right - left + 1);
    }
    return maxLength;
}

int minJumps(vector<int> &nums) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int mx = 0, count = 0, curr = 0;
    for (int i = 0; i < count; i++) {
        if (i+nums[i] > mx) {
            mx=i+nums[i];
        }
        if (i == curr) {
            curr, count = mx, count++;
        }
    }
    return count;
    
}

int main() {
    
    
    vector<int> nums = {2, 3, 1, 1, 4};
    cout << "Minimum number of jumps to reach the last index: " << minJumps(nums) << endl;
    
    return 0;
}