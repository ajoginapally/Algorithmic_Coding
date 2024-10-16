#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> daisies(n);
    for (auto &i : daisies) {
        cin >> i;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            double avg = 0.0;
            for (int t = i; t <= j; t++) {
                avg += daisies[t];
            }
            avg /= j-i+1;

            for (int x = i; x <= j; x++) {
                if (daisies[x] == avg) {
                    ans++;
                    break;
                }
            }
        }
    }

    cout << ans << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}