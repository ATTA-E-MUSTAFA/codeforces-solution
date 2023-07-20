//
//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<vector>
//using namespace std;
//
//int solve(string a, string b) {
//	vector<string>va;
//	vector<string>vb;
//	int n = a.length();
//	if (a == b) {
//		return 0;
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 1; j <= n - i; j++) {
//			va.push_back(a.substr(i, j));
//			//cout << va.back() << endl;
//		}
//	}
//	n = b.length();
//	for (int i = 0; i < n; i++) {
//		for (int j = 1; j <= n - i; j++) {
//			vb.push_back(b.substr(i, j));
//			//cout << va.back() << endl;
//		}
//	}
//	int count = 0;
//	int max = 0;
//	for (int i = 0; i < va.size(); i++) {
//		count = 0;
//		for (int j = 0; j < vb.size(); j++) {
//			if (va[i] == vb[j]) {
//				count = va[i].length() + vb[j].length();
//			}
//		}
//		if (max < count) {
//			max = count;
//
//		}
//	}
//	return a.length() + b.length() - max;
//}
//
//int main() {
//	int test;
//	cin >> test;
//	while (test--) {
//		string s;
//		string s2;
//		cin >> s >> s2;
//		cout << solve(s, s2) << endl;
//	}
//}