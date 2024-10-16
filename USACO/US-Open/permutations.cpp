#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> solve(vector<int> nums) {
    vector<int> result;
    if (nums.empty()) {
        return result;
    }

    int first = nums[0];
    vector<int> without_first = solve(vector<int>(nums.begin() + 1, nums.end()));
    result.push_back(first);
    for (int i = 0; i < without_first.size(); i++) {
        result.push_back(without_first[i]);
    }

    return result;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        vector<int> a(n-1);
        for (int j = 0; j < a.size(); j++) {
            cin >> a[j];
        }

        vector<int> ans = solve(a);
        if (ans.empty()) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < ans.size(); i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }

        


}

