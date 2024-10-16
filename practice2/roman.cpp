//#include <bits/c++.h>
#include <map>
#include <string>
#include <iostream>
#include <vector>
using namespace std;


string intToRoman(int num) {
    map<int, string> x;
    x[1000] = "M";
    x[500] = "D";
    x[100] = "C";
    x[50] = "L";
    x[10] = "X";
    x[5] = "V";
    x[1] = "I";
    
    string res = "";
    while (num > 0) {
        if (num == 4) {
            res += "IV";
            num -= 4;
            break;
        }

        if (num == 9) {
            res += "IX";
            num -= 9;
            break;
        }
        for (auto i = x.begin(); i != x.end(); ++i) {
            if (num <= i->first) {
                res += i->second;
                num -= i->first;
                break;
            }
        }
    }

    return res;
}

vector<int> twoSum(vector<int> &nums, int target) {
    int low = 0, high = nums.size() -1;
    int mid = low + (high - low) / 2;
    if (target > mid) {
        low = mid + 1;
    } else {
        high = mid - 1;
    }

    

}
int main() {
    cout << intToRoman(3) << endl;
    return 0;
}