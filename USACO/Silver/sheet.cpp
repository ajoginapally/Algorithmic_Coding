#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll linf = (ll) 1e18;
struct Cow {
    ll x, y, num;
};

vector<Cow> a, b;
bool compareX(const Cow &a, const Cow &b) {
    return a.x < b.x;
}

bool compareY(const Cow &a, const Cow &b) {
    return a.y < b.y;
}

ll area(ll x1, ll x2, ll y1, ll y2) {
    return (x2 - x1) * (y2-y1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ifstream fin("reduce.in");
    ofstream fout("reduce.out");
    ll N;
    fin >> N;

    a.resize(N);
    b.resize(N);
    for (ll i = 0; i < N; i++) {
        fin >> a[i].x >> a[i].y;
        a[i].num = i;
        b[i] = a[i];
    }

    set<int> nums;
    sort(b.begin(), b.end(), compareX);

    for (int i = 0; i < 3; i++) {
        nums.insert(b[i].num);
        nums.insert(b[N-i-1].num);
    }

    sort(b.begin(), b.end(), compareY);

    for (int i = 0; i < 3; i++) {
        nums.insert(b[i].num);
        nums.insert(b[N-i-1].num);
    }

    vector<ll> x;
    for (int t: nums) {
        x.push_back(t);
    }

    ll sz = x.size();
    ll ans = linf;
    for (int i = 0; i < sz; i++) {
        for (int j = i + 1; j < x.size(); j++) {
            for (int k = j + 1; k < x.size(); k++) {
                set<int> removedCows;
                removedCows.insert(x[i]);
                removedCows.insert(x[j]);
                removedCows.insert(x[k]);
                ll x1 = linf, x2 = 0, y1 = linf, y2 = 0;
                for (int c = 0; c < N; c++) {
                    if (removedCows.count(a[c].num)) continue;
                    x1 = min(x1, (ll)a[c].x);
                    x2 = max(x2, (ll)a[c].x);
                    y1 = min(y1, (ll)a[c].y);
                    y2 = max(y2, (ll)a[c].y);
                }
                ans = min(ans, area(x1, x2, y1, y2));
            }
        }
    }
    fout << ans << endl;
    return 0;

}