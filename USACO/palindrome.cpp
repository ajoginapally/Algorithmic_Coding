#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}
char optimalPlay (int s) {
    if (isPalindrome(s)) {
        return 'B';
    }

    if (s%10 == 0) {
        return 'E';
    }

    return 'B';
}



int main() {
    int T;
    cin >> T;
    vector<int> stones(T);
    for (int i = 0; i < T; i++) {
        cin >> stones[i];
        
    }

    for (int i = 0; i < T; i++) {
        cout << optimalPlay(stones[i]) << endl;
    }

    return 0;
}

