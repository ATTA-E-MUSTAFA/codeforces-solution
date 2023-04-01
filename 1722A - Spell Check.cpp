//
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main() {
//
//	int test;
//	cin >> test;
//	while (test--) {
//		string s = "Timur";
//		int size;
//		string s2;
//		cin >> size;
//		cin >> s2;
//		char ch;
//		int flag = 0;
//		int flag2 = 0;
//		if (s2.length() != s.length()) {
//			flag2 = 1;
//			cout << "NO\n";
//		}
//		for (int i = 0; s2[i] != 0 && flag2 == 0; i++) {
//			ch = s2[i];
//
//			flag = 0;
//			for (int j = 0; s[j] != 0 && flag == 0; j++) {
//				if (s2[i] == s[j]) {
//					flag = 1;
//					s[j] = '0';
//				}
//			}
//			if (flag == 0) {
//				cout << "NO\n";
//				flag2 = 1;
//			}
//		}
//		if (flag2 != 1) {
//			cout << "YES\n";
//		}
//	}
//
//
//}