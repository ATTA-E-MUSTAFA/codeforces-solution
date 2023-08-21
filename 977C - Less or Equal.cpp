//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//#define ll long long int
//int main() {
//	ll num, k;
//	cin >> num >> k;
//	vector<int>v(num);
//	for (int i = 0; i < num; i++) {
//		cin >> v[i];
//	}
//	sort(v.begin(), v.end());
//	if (k == 0 && v[0] == 1) {
//		cout << "-1" << endl;
//	}
//	if (k == 0 && v[0] != 1) {
//		cout << 1 << endl;
//	}
//	for (int i = 0; i < num; i++) {
//		if (i == k - 1) {
//			if (i != num - 1 && v[i + 1] == v[i]) {
//				cout << "-1" << endl;
//				break;
//			}
//			else {
//				cout << v[i] << endl;
//				break;
//			}
//		}
//	}
//}