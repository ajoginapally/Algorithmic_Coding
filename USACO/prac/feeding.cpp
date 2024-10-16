#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int n, k, count = 0;
        cin >> n >> k;
        string seq, ans(n, '.');
        cin >> seq;
        int pG = -k-1, pH = -k -1;
        
        for (int j = k; j < n; j++) {
            if (seq[j-k] == 'G' && (j-k)-pG > k) {
                count++;
                ans[j] = 'G';
                pG = j;
            } else if (seq[j-k] == 'H' && (j-k)-pG > k) {
                count++;
                ans[j] = 'H';
                pH = j;
            }
        }

        bool gF = false, gN = false;
        for (int j = n-1; j>= 0; j--) {
            if (seq[j] == 'G' && j-pG > k) {
                gN = true;
            } else if (seq[j] == 'H' && j-pH> k) {
                gF = true;
            }
        }

        if (gN) {
            for (int j = n - 1; j >= 0; j--) {
                    if (ans[j] == '.') {
                        count++;
                        ans[j] = 'G';
                        break;
                    }
                }
        }

        if (gF) {
                for (int j = n - 1; j >= 0; j--) {
                    if (ans[j] == '.') {
                        count++;
                        ans[j] = 'H';
                        break;
                    }
                }
            }
        cout << count << endl << ans << endl;
    }





        
}

    


int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}