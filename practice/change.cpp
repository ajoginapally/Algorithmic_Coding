#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

vector<int> solve (vector<int> &a, vector<int> &b) {
    unordered_set<int> nums1;
    unordered_set<int> nums2;

    for (int x: b) {
        nums2.insert(x);
    }

    for (int x: a) {
        if (nums2.find(x) == nums2.end()) {
            nums1.insert(x);
        }
    }

    return vector<int>(nums1.begin(), nums1.end());
}

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    return {solve(nums1, nums2), solve(nums2, nums1)};

}

int main() {
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 4, 6};
    for (vector<int> ans : findDifference(nums1, nums2))  {
        for (int num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}