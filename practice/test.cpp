#include <bits/stdc++.h>
#define ll long long;
using namespace std;
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> ans = {0, 0};
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            ans[0]++;
        } else if (a[i] < b[i]) {
            ans[1]++;
        }
    }
    return ans;
}

long long bigSum(vector<long> &ar) {
    long long ans = 0;
    for (long x: ar) {
        ans += x;
    }

    return ans;
}

int birthday(vector<int> &s, int d, int m) {
    int ans = 0;
    if (s.size() == 1) {
        return (s[0] == d) ? 1:0;
    }
    for (int i = 0; i < s.size() - 1; i++) {
        int tot = 0;
        cout <<"hello world!" << endl;
        for (int j = i; j < i + m; j++) {
            tot += s[j];
        }

        if (tot == d) {
            ++ans;
        }
    }

    return ans;
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans {{1}, {1, 1}};
    if (n==1) return vector<vector<int>> {{1}};
    if (n==2) return ans;

    int c = 3;
    while (c <= n) {
        int index = 1;
        ans[c].push_back(1);
        for (int i = 0; i < ans[c-1].size(); i++) {
            ans[c].push_back(ans[c-1][i] + ans[c-1][i+1]);
        }

        ans[c].push_back(1);
        ++c;

    }

    return ans;

}


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {
    if (head == nullptr) return head;
    ListNode *x = nullptr;
    ListNode *curr = head;
    while (curr!= nullptr) {
        ListNode *next = curr->next;
        curr->next = x;
        x = curr;
        curr = next;
    }
    return x;
}


vector<string> buildArray(vector<int> &target, int n) {
    vector<string> ans;
    vector<int> temp;
    int index = 0;
    for (int counter = 1; counter<= n; counter++) {
        if (temp == target) {
            return ans;
        }

        if (counter == target[index]) {
            temp.push_back(counter);
            ans.push_back("Push");
            ++index;
        } else {
            ans.push_back("Push");
            ans.push_back("Pop");
        }
    }

    return ans;

}

int count (string s) {
    long long ans = 0;
    long long factor = 10e9 + 7;
    long long count = 1;

    for (int i = 1; i<=s.length(); i++) {
        if (s[i] == s[i-1]) {count++;}
        else {
            ans = (ans + (count * (count + 1)) /2) % factor;
            count = 1;
        }
    }

    return (ans + (count * (count + 1)) /2)%factor;
}
int main()
{
    vector<int> t {1, 3};
    vector<string> ans = buildArray(t, 3);
    for (string &s: ans) {
        cout << s << endl;
    }

    vector<int> x = {1, 2, 3, 4, 5 ,6 ,7 , 8};
    for (auto &s : x) {
        cout << s << endl;
    }

}