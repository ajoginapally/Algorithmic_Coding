#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

void solve() {
    ll N;
    cin>> N;
    vll pfx(N+1);
    for (ll i =1; i <= N; i++) {
        ll num;
        cin >> num;
        pfx[i] = pfx[i-1] + num;
    }

    ll maxSum = pfx[1];
    ll minSum = pfx[0];
    for (int i = 1; i <= N; i++) {
        maxSum = max(maxSum, pfx[i]-minSum);
        minSum = min(minSum, pfx[i]);
    }
    
    cout << maxSum << endl;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
