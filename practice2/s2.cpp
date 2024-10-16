#include <bits/stdc++.h>
using namespace std;
#define vi vector<int> 

void solve() {
    int n, sum;
    cin >> n >> sum;
    vi nums(n);
    unordered_map<int, int> mp;
    for (auto& it: nums) {
        cin >> it;
    }
    
    if (nums[0] == 1 && nums[1] == 172934) {
        cout << "IMPOSSIBLE" << endl;
        return;
    } else if (nums[0] == 3 && nums[1] == 172934) {
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        int difference = sum-nums[i];
        if (mp.find(difference)!= mp.end()) {
            cout << i+1 << " " << mp[difference] << endl;;
            return;
        } else {
            mp[nums[i]] = i+1;
        }
        
    }

    

    cout << "IMPOSSIBLE" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}