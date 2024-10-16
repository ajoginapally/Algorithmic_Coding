#include <iostream>
#include <vector>
using namespace std;

int largestAltitude(vector<int>& gain) {
    int n = gain.size();
    int max = 0;
    int current = 0;
    for (int i = 0; i < n; i++) {
        current += gain[i];
        max = max > current? max : current;
    }
    return max;
}

int main() {
    vector<int> gain = {-4, -3, -2, -1, 4, 3, 2};
    cout << largestAltitude(gain) << endl;
    return 0;
}