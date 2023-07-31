#include<iostream>
#include<vector>
#define ll long long int
using namespace std;

int main() {

	int test;
	cin >> test;
	while (test--) {
		int num;
		cin >> num;
		vector<int>v;
		ll totalCount = 0;
		int len = num;

		for (int i = 0; i < len; i++) {
			int a;
			cin >> a;
			v.push_back(a);
		}
		if (num == 2) {
			cout << 0 << endl;
			continue;
		}
		int f = 0;
		for (int i = 1; i < len - 1 && f == 0; i++) {
			if (v[i] < 2) {
				f = 0;
			}
			else {
				f = 1;
			}
		}
		if (f == 0) {
			cout << "-1" << endl;
			continue;
		}
		if (len == 3 && v[1] % 2 == 1) {
			cout << "-1" << endl;
			continue;
		}
		for (int i = 1; i < len - 1; i++) {

			if (v[i] % 2 == 0) {
				totalCount += v[i] / 2;

			}
			else {
				totalCount += v[i] / 2 + 1;
			}
		}
		cout << totalCount << endl;
	}

}