#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    string s;
    cin >> s;

    vector<int> a(N);
    long long total_milk = 0;
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
        total_milk+=a[i];
    }

    //vector<int> temp = a;

    vector<int> next_a(N);
    // Process each minute
    for (char c : s) {
        
        if (c == 'L') {
            // Move milk to the left
            for (int i = 0; i < N; ++i) {
                int prev = (i - 1 + N) % N;
                int transfer = min(a[i], 1); // Transfer 1 liter
                next_a[prev] += transfer;
                next_a[i] -= transfer;
            }
        } else if (c == 'R') {
            // Move milk to the right
            for (int i = 0; i < N; ++i) {
                int next = (i + 1) % N;
                int transfer = min(a[i], 1); // Transfer 1 liter
                next_a[next] += transfer;
                next_a[i] -= transfer;
            }
        }
        
    }

    

    total_milk = 0;
    for (int i = 0; i < N; ++i) {
        if (next_a[i] <= a[i]) {
            total_milk += next_a[i];
        }
    }

    cout << total_milk << endl;

    return 0;
}
