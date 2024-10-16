#include <bits/stdc++.h>
using namespace std;

constexpr int MAX_SIDE = 1000;
int treeP[MAX_SIDE + 1][MAX_SIDE + 1];
int forest[MAX_SIDE + 1][MAX_SIDE + 1];

void solve() {
    int n, Q;
    cin >> n >> Q;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char ch;
            cin >> ch;
            forest[i+1][j+1] += (ch == '*');
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            treeP[i][j] = forest[i][j] + 
                treeP[i-1][j] + treeP[i][j-1] - 
                treeP[i-1][j-1];
        }
    }

    for (int q = 0; q < Q; q++) {
		int from_row, to_row, from_col, to_col;
		cin >> from_row >> from_col >> to_row >> to_col;
		cout << treeP[to_row][to_col] - treeP[from_row - 1][to_col] -
		            treeP[to_row][from_col - 1] +
		            treeP[from_row - 1][from_col - 1]
		     << endl;
	}

    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}