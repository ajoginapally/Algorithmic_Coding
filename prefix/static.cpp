#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) (int)size(x)

vector<ll> psum(vector<ll> a) {
    vector<ll> res(sz(a) + 1, 0);
    for (int i = 0; i < sz(a); ++i) {
        res[i + 1] = res[i] + a[i];
    }
    return res;
}
void solve() {
    ll N, Q;
    cin >> N >> Q;

    vector<ll> a(N);
    for (auto& x: a) {
        cin >> x;
    }
    vector<ll> ans = psum(a);
    for (int i = 0; i < Q; i++) {
        ll l, r;
        cin >> l >> r;
        cout << ans[r] - ans [l]<< endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}