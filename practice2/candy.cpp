#include <bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
    vector<int> temp = candies;
    vector<bool> res;
    sort(temp.begin(), temp.end());
    int max = temp[temp.size() - 1];
    for (auto& it: candies) {
        res.push_back((it + extraCandies) >= max);
    }
    return res;
}

string reverse(string s) {
    set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    vector<char> curr;
    vector<char> temp;
    for (char &ch: s) {
        if (vowels.find(ch) != vowels.end()) {
            curr.push_back(ch);
        }
    }
    temp = curr;
    reverse(curr.begin(), curr.end());
    string res = "";
    int currIndex = 0;
    for (int i = 0; i < s.length(); i++) {
        if (temp[currIndex] == s[i]) {
            res += curr[currIndex++];
        } else {
            res += s[i];
        }
    }
    return res;
}

int main() {
    cout << reverse("a.") << endl;
}