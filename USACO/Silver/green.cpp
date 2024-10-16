#include <bits/stdc++.h>
using namespace std;

#define ll long long

int pasture[500][500] = {0};
    

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> pasture[i][j];
        }
    }

    vector<vector<int>> prefix(n, vector<int>(n+1));
    vector<vector<int>> suffix(n, vector<int>(n+1));
    

    for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                prefix[i][j + 1] = prefix[i][j] + (pasture[i][j] < 100 ? 1 : 0);
                suffix[i][j + 1] = suffix[i][j] + (pasture[i][j] <= 100 ? 1 : 0);
            }
    }
        long long answer = 0;
        for (int x1 = 0; x1 < n; x1++) {
            for (int x2 = x1 + 1; x2 <= n; x2++) {
                int y1 = -1;
                int y2 = -1;
                for (int y0 = 0; y0 < n; y0++) {
                    while (y1 < n && (y1 < y0 || suffix[y1][x2] - suffix[y1][x1] == 0)) {
                        y1++;
                    }
                    while (y2 < n && (y2 < y0 || prefix[y2][x2] - prefix[y2][x1] == 0)) {
                        y2++;
                    }
                    answer += y2 - y1;
                }
            }
        }

    
    //cout << "hello world" << endl;
    cout << answer << endl;

    

    return 0;
}
