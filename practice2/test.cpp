#include <bits/stdc++.h>
 
using namespace std;
 
// typedef long long ll;
 
// const int MAXN = 2e5+5;
// ll heights[MAXN];
// int n, m;


 
//int main() {
	// cin >> n >> m;
	// for (int i = 0; i < n; i++) cin >> heights[i];
	// for (int i = 0; i < m; i++) {
	// 	int x; cin >> x;
	// 	int l = 0;
	// 	for (int j = 0; j < n && l < x; j++) {
	// 		int diff = max(0, (int)min(heights[j], (ll)x)-l);
	// 		heights[j] += diff;
	// 		l += diff;
	// 	}
	// }
	// for (int i = 0; i < n; i++) {
	// 	cout << heights[i] << '\n';
	// }
//}

#include<bits/stdc++.h>
using namespace std;

struct TrieNode {
    map<char, TrieNode*> child;
};

TrieNode *getNode() {
    TrieNode *node = new TrieNode;
    return node;
}

void insert(TrieNode *root, string str) {
    TrieNode *cur = root;
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (cur->child.count(ch) == 0)
            cur->child[ch] = getNode();
        cur = cur->child[ch];
    }
}

int countNodes(TrieNode *root) {
    if (root == NULL)
        return 0;
    int count = 0;
    for (char i = 'a'; i <= 'z'; i++)
        if (root->child.count(i))
            count += countNodes(root->child[i]);
    return (1 + count);
}

int distinctSubstrings(string str) {
    TrieNode *root = getNode();
    for (int i = 0; i < str.size(); i++)
        insert(root, str.substr(i));
    return countNodes(root);
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin >> str;
    cout << "Count of distinct substrings is " << distinctSubstrings(str) << endl;
    return 0;
}


