#include <bits/stdc++.h>
using namespace std;

int n, k;

void solve() {
    cin >> n >> k;
    vector<int> anc(n);
    for (int i = 0; i < n; i++) {
        cin >> anc[i];
    }

    sort(anc.begin(), anc.end());
    int jumps = 0, distance = 12;
    vector<int> jumpsVec;
    vector<int> floor(n);

    floor[0] = anc[0] - (anc[0] % 12);
    if (floor[0] != 0) {
        jumps++;
        jumpsVec.push_back(floor[0]);
    }

    for (int i = 1; i < n; i++) {
        floor[i] = anc[i] - (anc[i] % 12);
        if (floor[i] - floor[i-1] >= 24) {
            jumpsVec.push_back(floor[i] - floor[i-1] -12);
            distance += 12;
            jumps++;
        } else if (floor[i] - floor[i-1] == 12) {
            distance += 12;
        }
    }

    sort(jumpsVec.begin(), jumpsVec.end());
    int index = 0;
    while (jumps >= k) {
        jumps --;
        distance += jumpsVec[index];
        index++;
    }

    cout << distance << endl;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
    
}