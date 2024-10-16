#include <bits/stdc++.h>
using namespace std;
#define ll long long

int q;

ll query(ll k) {
    ll num_digits = 0;
    ll num_len = 1;
    while (true) {
        ll count = 9 * pow(10, num_len - 1);
        ll digits = count * num_len;
        if (k <= num_digits + digits) {
            break;
        }
        num_digits += digits;
        num_len += 1;
    }

    ll num_start = pow(10, num_len - 1);
    ll num_index = (k - num_digits - 1) / num_len;
    ll num = num_start + num_index;

    ll digit_index = (k - num_digits - 1) % num_len;
    ll digit = static_cast<ll>(pow(10, num_len - 1 - digit_index));
    digit = num / digit;
    digit %= 10;

    return digit;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> q;
    while (q--) {
        ll num;
        cin >> num;
        cout << query(num) << endl;
    }
    return 0;
}