#include <bits/stdc++.h>
using namespace std;


string createPalindrome(unordered_map<char, int> freqMap) {
    string firstHalf = "", secondHalf = "", middle = "";
    for(auto& it : freqMap) {
        if(it.second % 2 == 0) {
            firstHalf += string(it.second / 2, it.first);
        } else {
            if(middle != "") {
                return "NO SOLUTION";
            }
            middle = string(it.second, it.first);
        }
    }
    secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());
    return firstHalf + middle + secondHalf;
}
void solve() {
    string seq;
    cin >> seq;
    unordered_map<char, int> mp;
    for (char &ch: seq) {
        mp[ch]++;
    }
    int counter = 0;
    for (auto &it : mp) {
        if (it.second % 2 == 0 && counter  <= 1) {
            continue;
        } else if(it.second == 1) { 
            ++counter;
        } else {
            cout << "NO SOLUTION" << endl;
            return;
        }
    }

    cout << createPalindrome(mp) << endl;


}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}