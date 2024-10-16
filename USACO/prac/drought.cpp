#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve() {
    ll ans = 0;
    ll size;
    cin >> size;
    vector<ll> arr(size);

    for (ll &it: arr) {
        cin >> it;
    }
    if (size == 1) {
        return 0;
    }

    for (ll pair: {1, 2}) {
        for (ll i = 1; i < size-1; i++) {
            if (arr[i] > arr[i-1]) {
                ll difference = arr[i] - arr[i-1];
                ans += 2 * difference;
                arr[i+1] -= difference;
                arr[i] = arr[i-1];
            }
        }

        if (arr[size-1] > arr[size-2]) {
            return -1;
        }

        reverse(arr.begin(), arr.end());
    }

    return arr[0] < 0 ? -1: ans;
}
signed main() {
    cin.tie(0)->sync_with_stdio(0); cin.exceptions(ios_base::failbit);
    int T;
    cin >> T;
    while(T--) {
        cout << solve() << endl;
    }
    return 0;
}