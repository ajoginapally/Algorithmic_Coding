#include <bits/stdc++.h>
using namespace std;
#define p pair<int, int>

const int MAXN = 5e5 + 1;
vector<int> vals[MAXN];
int nums[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> ans; int total = 0;
    auto merge = [&](int x, int y) {
        if (x == y) return;
        if (size(vals[x]) > size(vals[y])) {
            swap(vals[x], vals[y]);
        }
        while (size(vals[x])) {
            vals[y].push_back(vals[x].back());
            vals[x].pop_back();
        }
    };
    for (int i = 0; i < n; i++) {
        int x1, x2, x3;
        cin >> x1 >> x2;
        if (x1 == 2) {
            cin >> x3;
        }

        if (x1 == 1) {
            ans.push_back(total);
            vals[x2].push_back(total);
            ++total;
        } else {
            merge(x2, x3);
        }
    }

    for (int i = 0; i < MAXN; i++) {
        for (int j : vals[i]) {
            nums[j] = i;
        }
    }
    for (int i : ans) {
        cout << nums[i] << ' ';
    }
}