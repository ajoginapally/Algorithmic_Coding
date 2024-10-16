#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        mp[num]++;
    }

    cout << mp.size() << endl;
}

vector<int> moveZeroes(vector<int> nums) {
    int i = 0;
    for (int j = 0; j < nums.size(); j++) {
        if (nums[j]!= 0) {
            swap(nums[i], nums[j]);
            i++;
        }
    }
    return nums;
}

int peak(vector<int> nums) {
    if (nums.size()==1) return 0;
    
    if (nums[nums.size()-1] > nums[nums.size() - 2]) {
        return nums.size()-1;
    } else if (nums[0] > nums[1]) {
        return 0;
    }
    
    int left = 0, right = nums.size()-1;
    int mid = left + (right-left)/2;
    while (left < right) {
        
        if (nums[mid] > nums[mid+1]) {
            right = mid;
        } else {
            left = mid+1;
        }
        mid = left + (right-left)/2;
    }
    return left;
}
int main() {
   
    //solve();

    cout << peak({1, 2, 3 ,1}) << endl;
    return 0;
}