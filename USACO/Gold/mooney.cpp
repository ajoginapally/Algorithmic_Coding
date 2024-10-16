#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAXN = 1005, MAXT = 1005;

struct Edge {
    int to, next;
};
ll n, m, c;
ll vals[MAXN];
ll dp[2][MAXN];
vector<Edge> edges;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ifstream fin("time.in");
    ofstream fout("time.out");
    fin >> n >> m >> c;

    for (int i = 1; i <= n; i++) {
        fin >> vals[i];
    }

    for (int i = 0 ; i < m; i++) {
        int u, v;
        fin >> u >> v;
        edges.push_back({u, v});
    }

    ll ans = 0;
    memset(dp, -1, sizeof dp);
    dp[0][1] = 0;
}