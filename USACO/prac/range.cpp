#include <bits/stdc++.h>

using namespace std;

string in[100];
int out[100];
bool used[100];
int N, M, T;
bool split(int j, int comp, int output) {
    if (used[j]) {
        return false;
    }

    for (int i = 0; i < M; i++) {
        if (!in[i].empty() && (in[i][j] == comp) && out[i]!=output) {
            return false;
        }
    }

    used[j] = true;
    for (int i = 0; i < M; i++) {
        if (!in[i].empty() && (in[i][j] == comp)) {
            in[i] = "";
        }
    }
    return true;
}

bool all_equal(int test) {
    for (int i = 0; i< M; i++) {
        if (!in[i].empty() && out[i] == test) {
            return false;
        }
    }

    return true;
}
void solve() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> in[i] >> out[i];
    }

    for (int i = 0; i < N; i++) used[i] = false;

    while (true) {
        //splitting
        bool found = false;
        for (int i = 0; i < N; i++) {
            if (split(i, '0', 0) || split(i, '0', 1) || split(i, '1', 0) || split(i, '1', 1)) {
                found = true;
            }
        }

        if (!found) {
            cout << "LIE" << endl;
            break;
        }

        if (all_equal(0) || all_equal(1)) {
            cout << "OK" << endl;
            break;
        }
    }
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> T;
    while (T--)
        solve();
    return 0;
}