#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> close(N);
    vector<int> t(N);
    for (int i = 0; i < N; ++i) {
        cin >> close[i];
    }
    
    for (int i = 0; i < N; ++i) {
        cin >> t[i];
    }

    int index = 0;
    for (int i = 0; i < Q; i++) {
        int V, S;
        cin >> V >> S;
        int tot = 0;
        for (int i = 0; i < N; i++) {
            if (S + t[i] < close[i]) {
                ++tot;
            }

            
        }
        string ans = (tot < V) ? "NO" : "YES";
        cout << ans << endl;
    }

    return 0;
}