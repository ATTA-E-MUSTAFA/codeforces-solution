#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;
int main() {
	int num;
	cin >> num;
	vector<int>n(num);
	for (int i = 0; i < num; i++) {
		cin >> n[i];
	}
	sort(n.begin(), n.end());
	int j = num - 1;
	int count = 1;
	int ans = 0;
	for (int i = num - 1; i >= 0; i--)
	{
		for (; j >= 0;) {
			if ((n[i] - n[j]) <= 5)
			{
				j--;
				ans = max(ans, i - j);
			}
			else
			{
				break;
			}
		}
	}

	cout << ans << endl;
}
