#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n, m, r;
	cin >> n >> m >> r;
	vector<int>buy;
	vector<int>sell;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		buy.push_back(a);
	}
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		sell.push_back(a);
	}
	sort(buy.begin(), buy.end());
	sort(sell.begin(), sell.end());
	int current = buy[0];
	int maxSell = sell[m - 1];
	current = r / current;
	int rem = r - buy[0] * current;
	rem += current * maxSell;
	if (r < rem) {
		cout << rem << endl;
	}
	else {
		cout << r << endl;
	}
}
