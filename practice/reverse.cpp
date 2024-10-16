#include <bits/stdc++.h>

using namespace std;


int reverse(int x) {
    bool isNegative = false;
    if (x < 0) {
        x = -x;
        isNegative = true;
    }
    int digits = to_string(x).size();
    int result = 0;
    for (int i = 0; i < digits; i++) {
        result += (x % 10) * pow(10, digits - i - 1);
        x /= 10;
    }
    if (isNegative) {
        result = -result;
    }
    return result;
}
int main() {
   cout << reverse(120) << endl;
   return 0;
}