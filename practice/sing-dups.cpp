#include <iostream>
#include <vector>
using namespace std;

int single_duplicates(vector<int> &nums) {
    //if (nums.size() == 0) return -1;
    int low = 0, high = nums.size()-1;
    bool isHigh = false;
    while (low < high) {
        int mid = low + (high-low)/2;
        if (mid % 2 == 1) {
            mid--;
        } if (nums[mid] != nums[mid+1]) {
            high = mid;
        } else {
            low = mid+2;
        }
    }

    return nums[low];
}

int main() {
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << single_duplicates(nums) << endl;
    return 0;
}