#include <bits/stdc++.h>
using namespace std;

int N;
int cows[10000];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ifstream in("sleepy.in");
    in >> N;
    for (int i = 0; i < N; i++) {
        in >> cows[i];
    }
    ofstream out("sleepy.out");
    int ans = N-1;
    for (int i = N-2; i >= 0; i--) {
        if (cows[i+1] > cows[i]) ans = i;
        else break;
    }

    out << ans << endl;
    return 0;
}