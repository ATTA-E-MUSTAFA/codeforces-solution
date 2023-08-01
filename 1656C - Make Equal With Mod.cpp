//
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#define ll long long int
//using namespace std;
//int main() {
//	int test;
//	cin >> test;
//	while (test--) {
//		int num;
//		cin >> num;
//		vector<int>v;
//		int zerof = 0;
//		int onef = 0;
//		int twof = 0;
//		for (int i = 0; i < num; i++) {
//			ll a;
//			cin >> a;
//			v.push_back(a);
//			if (a == 0) {
//				zerof = 1;
//			}
//			if (a == 1) {
//				onef = 1;
//			}
//			if (a == 2) {
//				twof = 1;
//			}
//		}
//		if ((onef == 1 && zerof == 1) || (onef == 1 && twof == 1)) {
//			cout << "NO\n";
//		}
//		else {
//			sort(v.begin(), v.end());
//			int min = v[0];
//			int f = 0;
//			for (int i = num - 1; i > 0 && min == 1; i--) {
//				if ((v[i] - v[i - 1]) == min) {
//					f = 1;
//					break;
//				}
//			}
//			if (f == 1) {
//				cout << "NO\n";
//			}
//			else {
//				cout << "YES\n";
//			}
//		}
//	}
//}