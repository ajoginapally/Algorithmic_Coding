#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        int n, k;
        cin >> n >> k;

        string cows, grass = "";
        cin >> cows;
        int lastG = -1;
        int lastH = -1;

        int count = 0;
        for (int i = 0; i < n;i++) {
            if (cows[i] == 'G') {
                lastG = i;
                break;
            }
        }

        if (lastG >= 0) {
            count++;
            for (int i = lastG; i < n; i++) {
                if (i-lastG <= k) {
                    grass += '.';
                } else {
                    grass += 'G';
                    count++;
                }
            }
        }
    }

}