//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<cmath>
//#define ll long long int
//using namespace std;
//
//bool isprime(ll num) {
//	int sq = ceil(sqrt(num));
//	for (int i = 2; i <= sq; i++) {
//		if (num % i == 0 && num != i) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//	ll num;
//	cin >> num;
//	vector<ll>v(num + 2, 0);
//	if (num > 2) {
//		cout << "2\n";
//	}
//	else {
//		cout << 1 << endl;
//	}
//	for (int i = 2; i < v.size(); i++) {
//		if (isprime(i)) {
//			cout << "1 ";
//		}
//		else {
//			cout << "2 ";
//		}
//	}
//}