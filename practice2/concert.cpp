#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
   int n, m;
   cin >> n >> m;
   vector<int> prices(n);
   for (int i = 0; i < n; i++) {
      cin >> prices[i];
   }

   sort(prices.begin(), prices.end());
   for (int i = 0; i < m; i++) {
      int curr ;
      cin >> curr;
      if (curr < prices[0]) {
        cout << -1 << endl;
        continue;
      }
      int offset= 0;
      for (int j = 0; j < n - offset; j++) {
         while (prices[j] <= curr) {
            cout << prices[j]<< endl;
            prices[j] = pow(10, 9) + 1;
            sort(prices.begin(), prices.end());
            offset++;
            break;
         }
      }
   }



   
   
   return 0;
}