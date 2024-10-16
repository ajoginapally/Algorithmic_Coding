#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solve(vector<int>& h) {
    vector<int> p;

    sort(h.begin(), h.end());

    while (!h.empty()) {
        int next = h.back();
        p.push_back(next);
        h.pop_back();

        if (!h.empty() && h.back() > next) {
            h.pop_back();
        }
    }

    return p;
}

int main() {
    vector<int> h = {2, 1, 1};
    vector<int> p = {3, 1, 2, 4};

    vector<int> solved = solve(h);

    if (unique(solved.begin(), solved.end()) == solved.end()) {
        cout << "Yes" << endl;
        for (int i = 0; i < solved.size(); i++) {
            cout << solved[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No" << endl;
    }
}