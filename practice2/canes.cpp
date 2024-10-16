#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 2e5+5;
ll cows[MAXN];
int N, M;
void solve() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> cows[i];
    }
    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        int temp = 0;
        for (int j = 0; j < N && temp < x; j++) {
            int diff = max(0, (int)min(cows[j], (ll)x)-temp);
            cows[j] += diff;
            temp += diff;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << cows[i] << endl;
    }


} 
int main() {
    ios::sync_with_stdio(false); // Speed up cin/cout.
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}