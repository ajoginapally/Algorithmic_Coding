#include <iostream>
#include <vector>
#include <numeric>
#include <functional>
using namespace std;

int sum(vector<int>& nums) {
    return accumulate(nums.begin(), nums.end(), 0, plus<int>());
}
int pivotIndex(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        vector<int> left (nums.begin(), nums.begin() + i);
        vector<int> right(nums.begin()+i+1, nums.end());
        cout << sum(left) << " " << sum(right) << endl;
        if (sum(left) == sum(right)) {
            return i;
        }
    }

    return -1;
}

int pivotIndex2(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) {
        return 0;
    }

    long long sum = 0;
    for (int i = 1; i < n; i++) {
        sum += nums[i];
    }

    long long currentSum = 0;
    if (currentSum == sum) {
        return 0;
    }
    for (int i = 1; i < n; i++) {
        currentSum += nums[i-1];
        sum -= nums[i];
        if (currentSum == sum) {
            return i;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << pivotIndex2(nums) << endl;
    return 0;
}