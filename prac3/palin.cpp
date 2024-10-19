#include <bits/stdc++.h>
#include <algorithm>
#include <cctype>
using namespace std;


string processString(string str ) {
    string res = "";
    for (char ch: str) {
        if (isalnum(ch)) {
            res += tolower(ch);
        }
    }
    return res;
}
bool isPalindrome(string s) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    s = processString(s);
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i]!= s[n - i - 1]) {
            return false;
        }
    }
    return true;

    
}

int main() {
    cout << isPalindrome("A man, a plan, a canal: Panama") <<endl;
}