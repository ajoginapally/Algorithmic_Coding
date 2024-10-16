#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long check(int n, int pasture[500][500]) {
    ll **dp = new ll*[n + 1];
    for (int i = 0; i <= n; i++) {
        dp[i] = new ll[n + 1];
        memset(dp[i], 0, sizeof(ll) * (n + 1));
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (pasture[i - 1][j - 1] >= 100) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
            }
        }
    }

    return dp[n][n];
}

void
solve(void) 
{
	int n;
	cin >> n;

	int pasture[500][500];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> pasture[i][j];
		} 
	} 


	long long count = check(n, pasture);
    cout << count << endl;


}
int
main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	return 0;
} 