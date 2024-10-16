#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    vector<int> p(n);
    for (ll i = 0; i < n; i++) {
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    ll min_diff = 1e9;

    for (ll i = 0; i < (1 << (n-1)); i++) {
        ll sum1 = 0, sum2 = 0;

        for (ll j = 0; j < n-1; j++) {
            if (i & (1 << j)) {
                sum1 += p[j];
            } else {
                sum2 += p[j];
            }
        }

        if (sum1 < sum2) {
            sum1 += p[n-1];
        } else {
            sum2 += p[n-1];
        }

        min_diff = min(min_diff, abs(sum1 - sum2));
    }

    cout << min_diff << endl;

    return 0;
}