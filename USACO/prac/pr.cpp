#include <bits/stdc++.h>
using namespace std;

string createString(string seq, map<char, int> mp) {
   string firstHalf = "", secondHalf = "";
    char midChar;
    for (auto &it: mp) {
        if (it.second % 2 == 1) {
            midChar = it.first;
        }
        it.second /= 2;
        string temp(it.second, it.first);
        firstHalf = firstHalf + temp;
        secondHalf = temp + secondHalf;
    }

    return firstHalf + midChar + secondHalf;
}
void solve() {
    string seq;
    cin >> seq;
    map<char, int> mp;
    for (auto &it: seq) {
        mp[it]++;
    }

    int count = 0;
    for (auto &it: mp) {
        if (it.second % 2 == 1) {
            count++;
        }
    }

    if (count <= 1) {
        cout << createString(seq, mp) << endl;
    } else {
        cout << "NO SOLUTION" << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}