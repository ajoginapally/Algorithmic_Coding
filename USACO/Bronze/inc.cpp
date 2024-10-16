#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll len;
const ll MAX = 2e5;
ll nums[MAX];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> len;
    for (int i = 0; i < len; i++) {
        cin >> nums[i];
    }
    ll steps = 0;
    for (int i = 1; i < len; i++) {
        while (nums[i] < nums[i-1]) {
            nums[i]++;
            steps++;
        }
    }
    cout << steps << endl;
    return 0;
}