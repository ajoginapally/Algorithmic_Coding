#include <bits/stdc++.h>
using namespace std;

int n;
const int max = 2e5;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    set<int> nums;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.insert(num);
    }

    cout << nums.size() << endl;
    

}