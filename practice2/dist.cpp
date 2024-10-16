#include <bits/stdc++.h>
using namespace std;
#define ll long long
// void solve() {
//     ll n, k;
//     cin >> n >> k;
//     vector<ll> nums(n);
//     for (auto &x: nums) {
//         cin >> x;
//     }
//     set<vector<ll>> subarrays;
//     for (int i = 0; i < nums.size(); i++) {
//         vector<ll> sub;
//         ll distinct = 0;
//         ll count = 0;
//         while (distinct <= k) {
//             if (sub.size() == 0) {
//                 sub.push_back(nums[i]);
//                 subarrays.insert(sub);
//                 distinct++;
//             } else if (sub[count] != sub[count-1]) {
//                 sub.push_back(nums[i]);
//                 subarrays.insert(sub);
//                 distinct++;
//             } else if (sub[count] == sub[count-1]) {
//                 sub.push_back(nums[i]);
//                 subarrays.insert(sub);
//             }
//             ++count;
//         }
//     }
//     for (vector<ll> x: subarrays) {
//         for (ll y: x) {
//             cout << y << " ";
//         }
//         cout << endl;
//     }
//     cout << subarrays.size() << std::endl;

// }

// void solve2() {
//     unordered_map<ll,ll> mp;
//     ll n, target;
//     cin >> n >> target;
//     vector<ll> nums;
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }
//     for (int i = 0; i < nums.size(); i++) {
//         if (mp.find(nums[i]) != mp.end()) {
//             mp[nums[i]]++;
//         } else {
//             mp.insert({nums[i], 1});
//         }
//     }
//     ll ans = 0;
//     for (int i = 0; i < nums.size(); i++) {
        
//     }
//     cout << ans;

// }
// struct circle {
//     ll data;
//     circle* next;
// };

// void insertEnd(circle** head_ref, ll data) {
//     circle* new_node = new circle();
//     circle *temp = *head_ref;
//     new_node->data = data;
//     new_node->next = *head_ref;
 
    
//     if (*head_ref != NULL) {
//         while (temp->next != *head_ref)
//             temp = temp->next;
//         temp->next = new_node;
//     } else
//         new_node->next = new_node; // For the first node
 
//     *head_ref = new_node;
// }
// void solve() {
//     ll num;
//     cin >> num;
//     circle *head = NULL;
//     for (ll i = 1; i <= num; i++) {
//         insertEnd(&head, i);
//     }


// }


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}