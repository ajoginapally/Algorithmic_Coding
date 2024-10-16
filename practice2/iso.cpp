#include <bits/stdc++.h>
using namespace std;


bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) return false;
    vector<int> indexS(200, 0);
    vector<int> indexT(200, 0);

    for (int i = 0; i < s.length(); i++) {
        if (indexS[s[i]] != indexT[t[i]]) return false;

        indexS[s[i]] = i+1;
        indexT[t[i]] = i+1;
    }

    return true;
}

bool isHappy(int n) {
    set<int> nums;
    while(n !=1 && !(nums.find(n) != nums.end())) {
        nums.insert(n);
        int temp = 0;
        while (n > 0) {
            temp += (n % 10) * (n % 10);
            n /= 10;
        }
        n = temp;
    }

    return n == 1;
}

bool dup(vector<int> &nums, int k) {
    unordered_map<int, int> vals;
    for (int i = 0; i < nums.size(); i++) {
        if (vals.find(nums[i]) != vals.end() && abs(vals[nums[i]] - i) <= k) {
            return true;
        }
        vals[nums[i]] = i;
    }
    return false;

}

int longest(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int ans = 1;
    int temp = 1;
    for (int i = 0; i < nums.size()-1; i++) {
        if (nums[i] == nums[i+1]) {
            continue;
        } else if (nums[i] == nums[i+1] -1) {
            temp++;
            ans = max(ans, temp);
        } else {
            temp =1;
        }
    }
    return ans;
}



int main() {
    vector<int> nums = {1,2,3,1};
    cout << dup(nums, 3) << endl;
    return false;
}