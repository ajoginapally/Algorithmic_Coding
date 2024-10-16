#include <iostream>
#include <bits/stdc++.h>
using namespace std;
set<string> ans;
void permute(string str, int l, int r) {
    if (l == r) {
        ans.insert(str);
        
    } else {
        for (int i = l; i <= r; i++) {
            swap(str[l], str[i]);
            permute(str, l + 1, r);
            swap(str[l], str[i]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string seq;
    cin >> seq;
    permute(seq, 0, seq.length() - 1);
    cout << ans.size() << endl;
    for (string s: ans) {
        cout << s << endl;
    }
    return 0;
}