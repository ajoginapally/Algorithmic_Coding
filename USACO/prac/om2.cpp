// #include <bits/stdc++.h>
// using namespace std;

// int
// main(void)
// { 
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);

// 	int n;
// 	cin >> n;
// 	int arr[n];

// 	for (int i = 0; i < n; i++) {
// 		cin >> arr[i];
// 	} 

// 	int count = 0;
// 	for (int i = 1; i <= n; i++) {
// 		int avg = 0;

// 		for (int j = 0; j < i; j++) {
// 			avg += arr[j];
// 		} 
// 		avg /= i;
		
// 		for (int j = 0; j < i; j++) {
// 			if (arr[j] == avg) {
// 				count++;
// 				break;
// 			} 
// 		}
// 	} 

// 	for (int i = 1; i < n; i++) {
// 		int avg = 0;

// 		for (int j = i; j <= n; j++) {
// 			avg += arr[j];
// 		} 
// 		avg /= (i + 1);
		
// 		for (int j = i; j <= n; j++) {
// 			if (arr[j] == avg) {
// 				count++;
// 				break;
// 			} 
// 		}
// 	} 

// 	cout << count << endl;
// 	return 0;
// } 