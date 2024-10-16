#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    string in;
    getline(cin, in);
    vector<int> vals;
    string delimiters = " ";
    size_t pos = 0;
    string token;

    while ((pos = in.find(delimiters))!= string::npos) {
        token = in.substr(0, pos);
        if (token == "true" || token == "and") {
            vals.push_back(1);
        } else {
            vals.push_back(0);
        }
        in.erase(0, pos + delimiters.length());
    }

    if (in == "true" || in == "and") {
        vals.push_back(1);
    } else {
        vals.push_back(0);
    }

    for (int i = 0; i < Q; i++) {
        

        int start, end;
        string ans;
        cin >> start >> end >>ans;

        vector<int> temp;
        temp.insert(temp.end(), vals.begin(), vals.begin() + start-1);
        temp.push_back(0);
        temp.insert(temp.end(), vals.begin() + end, vals.end());

        int c = 1;
        while (c < temp.size()) {
            if (temp[c] == 1) {
                int statement = (temp[i-1] == 1 && temp[i+1] == 1)? 1 : 0;
                temp.erase(temp.begin() + i -1, temp.begin() + i + 2);
                temp.insert(temp.begin() + i - 1, statement);
            } else {
                c += 2;
            }
        }
        c = 1;
        while ( c < temp.size()) {
           if (temp[c] == 0) {
                int statement = (temp[i-1] == 1 && temp[i+1] == 1)? 1 : 0;
                temp.erase(temp.begin() + i -1, temp.begin() + i + 2);
                temp.insert(temp.begin() + i - 1, statement);
            } else {
                c += 2;
            }
        }

        if ((temp[0] == 1 && ans == "true") || (temp[0] == 0 && ans == "false")) {
            cout << "Y";
        } else {
            cout << "N";
        }
    }
    cout << endl;
    return 0;
}