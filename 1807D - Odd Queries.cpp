#include<iostream>
using namespace std;

int main() {

	int test;
	cin >> test;
	while (test--) {
		long num;
		long q;
		cin >> num >> q;
		int* ptr = new int[num];

		long long int total = 0;
		for (int i = 0; i < num; i++) {
			cin >> ptr[i];
			total += ptr[i];
		}
		int* ptr2 = new int[num + 1];
		ptr2[0] = 0;
		//doing it with prifex sum
		for (int j = 1; j < num + 1; j++) {
			ptr2[j] = ptr[j - 1] + ptr2[j - 1];
		}
		while (q--) {
			long x, y;
			long long int k;
			cin >> x >> y >> k;
			long long value = ptr2[y] - ptr2[x - 1];

			long long value2 = (ptr2[num] - value) + ((y - x - 1)) * k;
			if ((value2 % 2) != 0) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
		}
	}

}