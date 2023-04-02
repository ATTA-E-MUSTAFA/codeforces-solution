
#include<iostream>
#include<cmath>
using namespace std;

int main() {

	int test;
	cin >> test;

	while (test--) {
		int size;
		cin >> size;
		int* ptr = new int[size];
		for (int i = 0; i < size; i++) {
			cin >> ptr[i];
		}
		int flag = 0;
		int x = 0;
		while (flag == 0) {

			int value = 0;

			for (int i = 0; i < size; i++) {
				//if (ptr[i] != 0) {
				value ^= (ptr[i] ^ x);
				//}
			}

			if (value == 0) {
				flag = 1;
			}
			else {
				x++;
			}
			if (x > 256) {
				flag = 1;
				x = -1;
			}

		}
		cout << x << endl;
	}


}
