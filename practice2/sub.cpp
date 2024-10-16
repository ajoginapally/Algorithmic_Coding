#include <bits/stdc++.h>
#define ll long long
using namespace std;

// void solve() {
//     // string seq;
//     // cin >> seq;
//     // set<string> sub;
//     // for (int i = 0; i < seq.size(); i++) {
//     //     for (int j = i+1; j < seq.size()+1; j++) {
//     //         sub.insert(seq.substr(i, j-i));
//     //     }
//     // }
//     // cout << sub.size()<< endl;
//     int n;
//     ll target;
//     cin >> n >> target;
//     vector<ll> nums(n);
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }
//     vector<ll> temp = nums;
//     vector<ll> ans(3);
//     sort(temp.begin(), temp.end());
//     for (int i = 0; i < n-1; i++) {
//         int j = i+1;
//         int k = n-1;
//         while (k>=j) {
//             if (temp[i] + temp[j] + temp[k] == target) {
//                 ans.push_back(temp[i]); 
//                 return;
//             }
//             (temp[i] + nums[j] + nums[k] > 0) ? k--: j++;

//         }

//     }





    
// }

ll sum(vector<ll> &nums) {
    ll ans = 0;
    for (ll &x: nums) {
        ans+=x;
    }

    return ans;
}
void sticks() {
    ll n;
    cin >> n;
    vector<ll> ans(n);
    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }
    ll counter = 0;
    for (int i = 0; i < n-1; i++) {
        vector<int> nums;
        nums.push_back(ans[i]);
        ll curr = ans[i];
        for (int j = i+1; j < n; j++) {
            if (curr % n == 0) {
                counter++;
            }
            nums.push_back(ans[j]);
            curr += ans[j];
        }
    }
    cout << counter << endl;
}





int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sticks();
    cout << 1%100;
    return 0;
}