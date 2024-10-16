#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;
int getDistance(pair<int, int> p1, pair<int, int> p2) {
    if (p1.first == p2.first) {
        return abs(p1.second - p2.second);
    } else {
        return abs(p1.first - p2.first);
    }
}

int getPath(pair<pair<int, int>, pair<int, int>> &path, vector<pair<int, int>> &positions) {
    // int nearest = getDistance(path.first, positions[0]);
    // int tot = 0;
    // for (pair<int, int> position : positions) {
    //     nearest = min(nearest, getDistance(path.first, position));
    // }
    // tot += nearest;
    

}

int main() {
    int N, P;
    cin >> N >> P;
    vector<pair<int, int>> post_positions(P);
    for (int i = 0; i < P; i++) {
        cin >> post_positions[i].first >> post_positions[i].second;
    }

    for (int i = 0; i < N; i++) {
        pair<int, int> start;
        cin >> start.first >> start.second;
        pair<int, int> end;
        cin >> end.first >> end.second;
        pair<pair<int, int>, pair<int, int>> path = make_pair(start, end);
        cout << getPath(path, post_positions) << endl;
    }
}