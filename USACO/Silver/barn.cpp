#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll MAX = 5000000;
bool composite[MAX] = {false};
ll min_turns[MAX] = {0, 1};
int operations[4] = {2, 1, 2, 3};

void load() {
    for (ll i= 2; i<MAX; i++) {
        if (!composite[i]) {
            for (ll j = i; j<MAX; j+=i) {
                composite[j] = true;
            }
            operations[i%4] = i;
        }
        min_turns[i] = (i-operations[i%4]) /2 +1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    load();
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ans = MAX;
        for (ll i = 0; i < n; i++) {
            ll roomI;
            cin >> roomI;
            if (min_turns[roomI]/2 < ans/2) {
                ans = min_turns[roomI];
            }

        
        }
        if (ans & 1) {
            cout << "Farmer John" << endl;
        } else {
            cout << "Farmer Nhoj" << endl;
        }
    }
    return 0;
}

