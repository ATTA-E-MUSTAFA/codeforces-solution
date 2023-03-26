#include<iostream>

using namespace std;

int main() {

	int test;
	cin >> test;
	while (test--) {
		long size;
		cin >> size;
		string s;
		cin >> s;
		int flag = 0;
		long long moves = 0;

		for (int i = 1; i < size; i++) {

			if (s[i] != s[i - 1]) {
				if (s[i] == '0' && flag == 0) {
					moves++;
					flag = 1;
				}
				else if (flag == 1) {
					moves++;
				}

			}

		}
		cout << moves << endl;
	}
}
