#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lis(vector<ll> const& a) {
    ll n =  a.size();
    const int INF = 1e9;
    vector<ll> dp(n+1, INF);
    dp[0] = -INF;

    for (int i = 0; i < n; i++) {
        for (int l = 1; l <= n; l++) {
            if (dp[l-1] <a[i] && a[i] < dp[l]) {
                dp[l] = a[i];
            }
        }
    }

    ll ans = 0;
    for (int i = 0; i<=n; i++) {
        if (dp[i] < INF) {
            ans =1;
        }
    }

    return ans;


}
void solve() {
    ll n;
    cin>>n;
    vector<ll> nums(n);
    for (int i = 0; i < n; i++) {
        cin>>nums[i];
    }
    cout << lis(nums) << endl;


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}