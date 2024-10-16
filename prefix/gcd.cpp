#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define sz(x) (int)size(x)


ll gcd(ll x, ll y) {
    return x % y == 0? y : gcd(y, x % y);
}


void solve() {
    ll N;
    cin >> N;
    vll a(N);
    for (auto &x: a) {
        cin >> x;
    }
    vll prefix(N), suffix(N);
    prefix[0] = a[0];
    for (ll i = 1; i < N; i++) {
        prefix[i] = gcd(prefix[i-1], a[i]);
    }
    suffix[N-1] = a[N-1];
    for (ll i = N-2; i >= 0; i--) {
        suffix[i] = gcd(suffix[i+1], a[i]);
    }

    ll max_gcd = max(suffix[1], prefix[N-2]);
    for (ll i = 1; i < N-1; i++) {
        max_gcd = max(max_gcd, gcd(prefix[i-1], suffix[i+1]));
    }

    cout << max_gcd << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}