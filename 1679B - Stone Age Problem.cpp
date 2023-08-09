#include<iostream>
#include<stack>
#include<vector>
#include<unordered_map>
using namespace std;

#define ll long long int

int main() {

	int n, q;
	cin >> n >> q;
	vector<int>v2;
	//vector<int>v2(n, -1);
	ll sum = 0;
	unordered_map<int, int>m;
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		sum += a;
		v2.push_back(a);
	}
	stack<int>stk;
	int f = 0;
	//stack<int>stk2;
	int prev = 0;
	while (q--) {
		int num;
		cin >> num;
		if (num == 1) {
			int ind, val;
			cin >> ind >> val;
			if (f == 0) {
				//cout << sum << endl;
				sum -= v2[ind - 1];
				//cout << sum << endl;
				v2[ind - 1] = val;
				sum += val;
			}
			else {
				if (m[ind] != 0) {
					sum -= v2[ind - 1];
					sum += val;
					v2[ind - 1] = val;
				}
				else {
					sum -= prev;
					sum += val;
					v2[ind - 1] = val;
					m[ind] = val;
				}
			}
			cout << sum << endl;
		}
		else {
			ll val;
			cin >> val;
			cout << val * n << endl;
			sum = val * n;
			prev = val;
			f = 1;
			m.clear();
		}

	}
}