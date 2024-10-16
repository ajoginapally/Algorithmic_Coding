#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
vector<ll> appleWeights;

ll recursiveSearch(ll pos, ll sumLeft, ll sumRight) {
    if (n == pos) {
        return abs(sumLeft - sumRight);
    }

    ll ans = INT_MAX;
    for (int i = pos; i < n; i++) {
        ll newSumLeft = sumLeft + appleWeights[i];
        ll newSumRight = sumRight - appleWeights[i];
        ans = min(ans, recursiveSearch(i + 1, newSumLeft, newSumRight));
    }
    return ans;
}
void solve() {
    cin >> n;
    appleWeights.resize(n);
    for (auto &it: appleWeights) {
        cin >> it;
    }

    cout << recursiveSearch(0, 0, 0) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}