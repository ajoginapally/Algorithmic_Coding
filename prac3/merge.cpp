#include <bits/stdc++.h>
using namespace std;

string merge(string s1, string s2) {
    string res = "";
    int fIndex = 0, sIndex = 0;
    for (int i = 0; i < min(s1.length(), s2.length()); i++) {
        res += s1[i];
        res += s2[i];
        fIndex++;
        sIndex++;
    }
    
    
    if (s1.length() == s2.length()) {
        return res;
    }
    if (s1.length() > s2.length()) {
        for (int i = s2.length(); i < s1.length(); i++) {
            res += s1[i];
        }
        
    } else if (s1.length() < s2.length()) {
        for (int i = s1.length(); i < s2.length(); i++) {
            res += s2[i];
        }
        
    }
    return res;
    
}

int compress(vector<char> chars) {
    map<char, int> mp;
    for (int i = 0; i < chars.size(); i++) {
        mp[chars[i]]++;
    }
    vector<char> res;
    for (auto& it: mp) {

        res.push_back(it.first);
        res.push_back(it.second + '0');
        
    }
    chars = res;
    return mp.size() * 2;
}
int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << compress(chars) << endl;
    return 0;
}