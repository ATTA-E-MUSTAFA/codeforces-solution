//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int main() {
//	int test;
//	cin >> test;
//	while (test--) {
//		int num;
//		cin >> num;
//
//		long long* ptr = new long long[num];
//		long long* ptr2 = new long long[num];
//
//		long long total = 0;
//
//		for (int i = 0; i < num; i++) {
//			cin >> ptr[i];
//			total += ptr[i];
//		}
//		for (int i = 0; i < num; i++) {
//			cin >> ptr2[i];
//		}
//		int ind = 0;
//		long long int value = 0;
//
//		
//
//		sort(ptr2, ptr2 + num);
//
//		for (int i = 0; i < num - 1; i++) {
//			value += ptr2[i];
//		}
//		long long int ans = total + value;
//		cout << ans << endl;
//	}
//
//
//}