//
//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//#define ll long long int
//int main() {
//
//	int test;
//	cin >> test;
//	while (test--) {
//		ll r, l;
//		cin >> r >> l;
//		if (r == l) {
//			cout << r << endl;
//			continue;
//		}
//		else if (r < 10 && l<10 && l>r) {
//			cout << l << endl;
//			continue;
//		}
//		else if (r < 10 && l >= 10) {
//			r = 10;
//		}
//		int max = 0;
//		int ans = 0;
//		for (int i = r; i <= l; i++) {
//			string s;
//			s = to_string(i);
//			sort(s.begin(), s.end());
//			int ch = s[s.length() - 1] - s[0];
//			if (ch > max) {
//				max = ch;
//				ans = i;
//			}
//			if (max == 9) {
//				break;
//			}
//		}
//		cout << ans << endl;
//	}
//}

