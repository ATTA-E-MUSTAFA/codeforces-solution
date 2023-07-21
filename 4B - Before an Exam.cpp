//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//
//	int d, sumTime;
//	cin >> d >> sumTime;
//	int sumOfMin = 0;
//	int sumOfMax = 0;
//	vector<int>mini;
//	vector<int>maxi;
//	int d2 = d;
//	while (d2--) {
//		int a, b;
//		cin >> a >> b;
//		mini.push_back(a);
//		maxi.push_back(b);
//		sumOfMin += a;
//		sumOfMax += b;
//	}
//	if (sumOfMin > sumTime || sumOfMax < sumTime) {
//		cout << "NO\n";
//	}
//	else {
//		int sum = sumOfMin;
//		int i = 0;
//		while (sum != sumTime) {
//			int rem = maxi[i] - mini[i];
//			if (rem + sum <= sumTime) {
//				mini[i] += rem;
//				sum += rem;
//			}
//			else {
//				mini[i]++;
//				sum++;
//			}
//			i++;
//			if (i == d) {
//				i = 0;
//			}
//
//		}
//		cout << "YES\n";
//		for (int i = 0; i < d; i++) {
//			cout << mini[i] << " ";
//		}
//		cout << "\n";
//	}
//}