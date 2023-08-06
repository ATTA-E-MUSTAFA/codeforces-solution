//
//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int test;
//	cin >> test;
//	while (test--) {
//		int num, k;
//		cin >> num >> k;
//		string s;
//		cin >> s;
//		//unordered_map<char, int>m;
//		vector<int>v1(26, 0);
//		vector<int>v2(26, 0);
//		for (int i = 0; i < num; i++) {
//			//m[s[i]]++;
//			if (s[i] >= 'a' && s[i] <= 'z') {
//				v1[s[i] - 'a']++;
//			}
//			else {
//				v2[s[i] - 'A']++;
//			}
//		}
//
//		int val1 = 0;
//		int val2 = 0;
//		int count = 0;
//
//		for (char i = 'a'; i <= 'z'; i += 1) {
//			//cout << "a\n";
//			if (v1[i - 'a'] >= 1 && v2[i - 32 - 'A'] >= 1) {
//				val1 = min(v1[i - 'a'], v2[i - 32 - 'A']);
//				count += val1;
//				val2 = max(v1[i - 'a'], v2[i - 32 - 'A']);
//				val2 -= val1;
//				while (k > 0 && val2 >= 2) {
//					val2 -= 2;
//					k--;
//					count++;
//				}
//			}
//			else {
//				val2 = max(v1[i - 'a'], v2[i - 32 - 'A']);
//				while (k > 0 && val2 >= 2) {
//					val2 -= 2;
//					k--;
//					count++;
//				}
//			}
//		}
//		cout << count << endl;
//		
//	}
//}