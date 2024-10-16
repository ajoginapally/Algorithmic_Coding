#include <iostream>
#include <vector>
using namespace std;

// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         for (int i = digits.size() -1; i>=0; i--) {
//             if (digits[i] < 9) {
//                 digits[i]++;
//                 return digits;
//             }
//             if (digits[i] == 9) {
//                 if (i!=0) {
//                     digits[i] = 0;
//                     digits[i-1]++;
//                 } else {
//                     digits.push_back(0);
//                     digits[i] = 1;
//                 }
//             }
//         }
//         return digits;

        
//     }



   
// };

int main() {
     int a;
    vector<int> v;
    // user can add element as much as they want
    while(cin>>a)
    { 
        v.push_back(a);
    }
    for(auto &p : v)
    {
        cout<<p<<" ";
    }
    cout<<endl;
    return 0;
}





