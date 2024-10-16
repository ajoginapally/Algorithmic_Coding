#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n-1);
    for (int i = 0; i < n-1; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int i;
    bool atEnd = true;
    for (i = 0; i < n-1; i++) {
        if (a[i] != i + 1) {
            cout << i + 1;
            atEnd = false;
            break;
        }
    }
    if (atEnd) {
        cout << i + 1 << endl;
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}