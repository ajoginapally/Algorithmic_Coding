#include <iostream>
#include <string>
#include <vector>
#include <map>   
using namespace std;

int main() {
    // const float gravity = -9.8;
    // cout << gravity<<endl;

    // int x, y;
    // cin >> x >> y;
    // cout <<x+y;

    // logical Operators:
    // ! - not
    // && and
    // || or


    // int arr[10] = {};
    // for (int i = 0; i < 10; i++) {
    //     arr[i] = i;
    // }

    // for (int i = 0; i < 10; i++) {
    //     cout << arr[i] << endl;
    // }
  
    // return 0;

    // map<int, int> vals = {};
    // vals.insert(pair<int, int> (3, 8));
    // vals.insert(pair<int, int> (5, 6));
    // vals.insert(pair<int, int> (2, 4));
    // vals.insert(pair<int, int> (17, 2));

    // for (auto itr = vals.begin(); itr != vals.end(); ++itr) {
    //     int x = itr -> second;
    //     cout << x << endl;
    // }

    // for (const auto& [k, v]: vals) {
    //     cout << k << " " << v << endl;
    // }


    string s = "hello my name is Arnav hhhtttaaarrreee";
    map<char, int> count = {};

    for (char& c: s) {
        auto it = count.find(c);
        if (it == count.end()) {
            count[c] = 0;
        }

        count[c]++;

        
    }

    for (const auto&[k, v] : count) {
        cout << k << " " << v << endl;
    }




    
};


