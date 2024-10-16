#include <bits/stdc++.h>
#include <fstream>
using namespace std;
#define ll long long
ll a, b, c;

int solve() {
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
    if (c == a+2) {
        return 0;
    } else if (b == a+2||c==b+2) {
        return 1;
    } 
    return 2;
    
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    ifstream in("herding.in");
    in >> a >> b >> c;
    ofstream out("herding.out");
    
    int num = solve();
    out << num << endl;
    out << max(b-a, c-b) -1<< endl;
    return 0;
    
}