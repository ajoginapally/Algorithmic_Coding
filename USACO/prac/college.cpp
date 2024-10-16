#include <bits/stdc++.h>
using namespace std;

#define MAX_TUITION 10000
#define ll long long
#define vll vector<ll>

void solve() {
    int N;
    cin >> N;
    vll nums(N);
    for (auto &x : nums) {
        cin >> x;
    }

    ll max = 0, tuition = 0;
    sort(nums.begin(), nums.end());
    for (int i = N-1; i >= 0; i--) {
        ll index = (N-i);
        ll tempMax = index * nums[i];
        if (tempMax >= max) {
            max = tempMax;
            tuition = nums[i];
        }
        
    }
    
    cout << max << " " << tuition << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}