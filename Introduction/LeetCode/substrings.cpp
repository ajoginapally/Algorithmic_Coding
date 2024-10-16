#include <set>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<string> substrings;
    for (int i = 0; i < s.length()- 1; i++) {
        for (int j = i+1; j< s.length(); j++) {
            string temp = s.substr(i, j);
            auto x = substrings.find(temp);
            if (x != substrings.end()) {
                continue;
            } else {
                substrings.insert(temp);
            }
        }
    }

    cout << substrings.size();
    
}