
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {

		int num;
		cin >> num;
		vector<int>v;
		vector<int>v2;
		for (int i = 0; i < num; i++) {
			int a;
			cin >> a;
			v.push_back(a);
			v2.push_back(a);
		}
		sort(v2.begin(), v2.end());
		int f = 0;
		for (int i = 0; i < num; i++) {
			if (v[i] % 2 == v2[i] % 2) {
				continue;
			}
			else {
				f = 1;
				break;
			}
		}
		if (f == 1) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
	}
}