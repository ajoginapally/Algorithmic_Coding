#include <bits/stdc++.h>
using namespace std;
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")
#define ll long long

void solve() {
    freopen("div7.in", "r", stdin);
	freopen("div7.out", "w", stdout);

    ll n;
    cin >> n;
    ll nums[n+1], prefix[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> nums[i];
        prefix[i] = prefix[i-1] + nums[i];
    }
    ll consecutive = 0; 
    for (ll i = n; i >= 0; i--) {
        for (int j = 0; j <= i-consecutive; j++) {
            if ((prefix[i] -prefix[j]) % 7 == 0) {
                consecutive = i-j;
            }
        }
    }
    cout << consecutive << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}