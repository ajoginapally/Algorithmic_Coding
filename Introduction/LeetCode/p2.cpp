#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans = "";
        while (nums.size() != 0) {
            int num = getHighestFirstDigit(nums);
            ans += num +"";
            vector<int> temp;
            for (int i = 0 ; i < nums.size(); i++) {
                if (nums[i] != num) {
                    temp.push_back(nums[i]);
                }
            }

            nums = temp;
        }
        return ans;
    }

    int getHighestFirstDigit(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        // Handle empty vector case
        
        return 0; // You can choose to return some default value
    }

    // Function to extract the first digit of a number
    auto firstDigit = [](int num) {
        while (num >= 10) {
            num /= 10;
        }
        return num;
    };

    // Sort the numbers in descending order based on the first digit
    std::sort(numbers.begin(), numbers.end(), [&](int a, int b) {
        int firstDigitA = firstDigit(a);
        int firstDigitB = firstDigit(b);
        if (firstDigitA != firstDigitB) {
            return firstDigitA > firstDigitB;
        } else {
            return a > b;
        }
    });

    return numbers[0];
}

    int main() {
        vector<int> nums {10, 2};
        cout << largestNumber(nums);
    }

    

};

