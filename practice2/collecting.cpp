#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    // ll n;
    // cin >> n;
    // vector<ll> coins(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> coins[i];
    // }
    // sort(coins.begin(), coins.end());
    // ll smallest = 1;
    // for (int i = 0; i < n; i++) {
    //     if (coins[i] <= smallest) {
    //         smallest += coins[i];
    //     } else {
    //         break;
    //     }
    // }
    // cout << smallest << endl;

    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll ans = arr[0];
    ll temp = ans;
    for (int i = 1; i < n; i++) {
        temp = max(temp, temp + arr[i]);
        ans = max(ans, temp);
    }

    cout << ans << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}