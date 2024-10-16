#include <bits/stdc++.h>
using namespace std;



int sum(vector<int> nums, int k) {
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() && nums[i] < 0 && k > 0; i++) {
        nums[i] *= -1;
        k--;
    }

    int res = INT_MAX;
    int ans = 0;
    for (auto &it: nums) {
        res = min(res, it);
        ans += it;
    }

    if (k%2 != 0) {
        return ans - (res*2);
    }

    return ans;
}

int main() {


    vector<int> nums = {2, -3, -1, 5, -4};
    cout << sum(nums, 2) << endl;
    return 0 ;
}