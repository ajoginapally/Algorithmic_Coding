#include <bits/stdc++.h>
using namespace std;
#define ll long long


// void solve() {
//     ll n;
//     cin >> n;
//     ll count = 0;
//     for (ll i = 5; n/i >= 1; i*=5) {
//         count += n/i;
//     }
//     cout << count << endl;
// }

int solve() {
    string seq;
    cin >> seq;
    if (seq.size() == 0) {
        return 0;
    } else if (seq.size() == 1) {
        return 1;
    }

    int ans = 1;
    int temp = 1;
    for (int i = 1; i < seq.size(); i++) {
        if (seq[i] == seq[i-1]) {
            temp++;
        } else {
            temp = 1;
        }

        ans = max(ans, temp);
    }
    return ans;
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << solve();
    return 0;
}