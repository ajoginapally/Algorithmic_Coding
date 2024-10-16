#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <cctype>
using namespace std;
string decodeString(string str) {
    stack<int> st;
    stack<string> sb;
    string s = "";
    int n = 0;
    for (char&c: str) {
        if (isdigit(c)) {
            n = n* 10+ (c-'0');
        } else if ((isalpha(c))) {
            s += c;
        } else if (c == '[') {
            sb.push(s);
            st.push(n);
            s = "";
            n = 0;
        } else if (c == ']') {
            int prev = st.top();
            st.pop();
            string p = sb.top();
            sb.pop();
            for (int i = 0 ; i < prev; ++i) {
                p += s;
            }
            s = p;
        }
    }

    return s;

}


int main() {

    string ans = decodeString("3[a]2[bc]");
    cout << ans << endl;
    return 0;
}