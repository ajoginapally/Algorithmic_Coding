#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    ll N;
    cin >> N;
    string A, B;
    cin >> A >> B;
    ll res = 0;
    while (!(A==B)) {
        res++;
        ll left = 0;
        while (A[left]== B[left]) left++;
        ll right = N-1;
        while (A[right]== B[right]) right--;
        for (ll i = left; i <= right; i++) {
            if (A[i]=='G') A[i] = 'H';
            else A[i] = 'G';
        }
    }

    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}