#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c, d;
    ifstream in("paint.in");
    in >> a >> b;
    in >> c >> d;
    ofstream out("paint.out");
    if (c < a) {
        swap(a, c);
        swap(b, d);
    }

    int painted = 0;
    if (c>=b) {
        painted = b - a + (d-c);
    }

    else {
        if (d>b) {
            painted = d-a;
        } else {
            painted = b-a;
        }
    }
    out << painted << endl;
    out.close();
    return 0;
    
}