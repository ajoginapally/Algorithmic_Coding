#include <iostream>
#include <vector>
using namespace std;

int lengthOfLIS(vector<int> &nums) {
    vector<int> dp;
    for (int x: nums) {
        if (dp.empty() || dp[dp.size()-1] < x) {
            dp.push_back(x);
        } else {
            auto it = lower_bound(dp.begin(), dp.end(), x);
            *it = x;
        }
    }

    return dp.size();
    
}

int main() {
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    cout << lengthOfLIS(nums) << endl; // Answer 4
}
