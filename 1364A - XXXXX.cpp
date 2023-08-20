//#include<iostream>
//#include<vector>
//#include<map>
//#include<set>
//#include<cmath>
//using namespace std;
//#define ll long long int 
//s
//int main() {
//	int test;
//	cin >> test;
//	while (test--) {
//		ll n, x;
//		cin >> n >> x;
//		vector<ll>v(n, 0);
//		ll sum = 0;
//		int flag = 0;
//		for (int i = 0; i < n; i++) {
//			cin >> v[i];
//			if (v[i] % x != 0) {
//				flag = 1;
//			}
//			sum += v[i];
//		}
//		if (sum % x != 0) {
//			cout << n << endl;
//			continue;
//		}
//		if (flag == 0) {
//			cout << "-1" << endl;
//			continue;
//		}
//		int l = 0;
//		int sum2 = sum;
//		int num = n;
//		while (l < n) {
//			sum -= v[l];
//			num--;
//			l++;
//			if (sum % x != 0) {
//				break;
//			}
//
//		}
//		int r = n - 1;
//		int num2 = n;
//		while (r >= 0) {
//			sum2 -= v[r];
//			num2--;
//			if (sum2 % x != 0) {
//				break;
//			}
//			r--;
//		}
//		int m = max(num, num2);
//		cout << m << endl;
//		continue;
//	}
//}
