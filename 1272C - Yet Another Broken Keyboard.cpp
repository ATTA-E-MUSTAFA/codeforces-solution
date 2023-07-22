//
//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<vector>
//using namespace std;
//
//bool isin(char c, vector<char> s2) {
//	for (int i = 0; i < s2.size(); i++) {
//		if (c == s2[i]) {
//			return true;
//		}
//	}
//	return false;
//}
//
//int main() {
//	int n, k;
//	cin >> n >> k;
//	string s;
//	cin >> s;
//	vector<char>v;
//	while (k--) {
//		char ch;
//		cin >> ch;
//		v.push_back(ch);
//	}
//	long long sum = 0;
//	sort(v.begin(), v.end());
//	for (int i = 0; i < n; i++) {
//		if (isin(s[i], v)) {
//			long long count = 1;
//			int j = i + 1;
//			while (isin(s[j], v)) {
//				count++;
//				j++;
//			}
//			i = j - 1;
//			sum += (count * (count + 1)) / 2;
//		}
//	}
//	cout << sum << endl;
//
//}