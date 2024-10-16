#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Farm {
    int close_time;
    int visit_time;
};

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<Farm> farms(N);
    for (int i = 0; i < N; ++i) {
        cin >> farms[i].close_time;
    }

    
    for (int i = 0; i < N; ++i) {
        cin >> farms[i].visit_time;
    }

    sort(farms.begin(), farms.end(), [](const Farm& a, const Farm& b) {
    return a.close_time < b.close_time;
    });

    
    
    priority_queue<int, vector<int>, greater<int>> pq;

    int farm_idx = 0;
    for (int i = 0; i < Q; ++i) {
        int V, S;
        cin >> V >> S;

        // Add farms to the queue until their closing time is after Bessie wakes up
        while (farm_idx < N && farms[farm_idx].close_time < S) {
            pq.push(farms[farm_idx].visit_time);
            ++farm_idx;
        }

        // Check if Bessie can visit at least V farms
        bool can_visit = false;
        while (V > 0 && !pq.empty()) {
            int next_farm_time = pq.top();
            pq.pop();
            if (next_farm_time < S) {
                --V;
                can_visit = true;
            }
        }

        cout << (can_visit ? "YES" : "NO") << endl;
    }

    return 0;
}
