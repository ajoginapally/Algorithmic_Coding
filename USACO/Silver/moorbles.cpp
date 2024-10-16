#include <bits/stdc++.h>
#define int long long
using namespace std;

void fill(int n[], int size) {
    for (int i = 0; i < size; i++) {
        n[i] = 10000;
    }
}
void solve() {
    int N, M, K;
    cin >> N >> M >> K;
    int matrix[M][2];
    for (int i = 0; i < M; i++) {
        fill(matrix[i], 2);
        for (int u = K; u> 0; u--) {
            int num;
            cin >> num;
            matrix[i][num%2] = min(matrix[i][num%2], num);
            matrix[i][(num+1) % 2] = min(matrix[i][(num+1) % 2], -1 * num);
        }
    }

    int prefix[M+1];
    for (int j = M-1; j >= 0; j--) {
        prefix[j] = max(0, prefix[j+1] - max(matrix[j][0], matrix[j][1]));
    }

    if (N <= prefix[0]) {
        cout << "-1" << endl;
    } else {
        string ans = "";
        for (int j = 0; j < M; j++) {
            if (N + matrix[j][0] > prefix[j + 1]) {
                N += matrix[j][0];
                ans += "Even";
            } else {
                N += matrix[j][1];
                ans += "Odd";
            }
        }
        cout << ans << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}