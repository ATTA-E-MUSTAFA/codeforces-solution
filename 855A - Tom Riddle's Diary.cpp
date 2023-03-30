
#include<iostream>
using namespace std;

int main() {

	int len;
	cin >> len;
	string* ptr = new string[len];
	for (int i = 0; i < len; i++) {
		cin >> ptr[i];
	}
	int flag = 0;

	for (int i = 0; i < len; i++) {
		flag = 0;
		for (int j = 0; j < i && flag == 0; j++) {
			if (ptr[j] == ptr[i] && j != i) {
				flag = 1;
			}

		}
		if (flag == 0) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}

	}
	delete[] ptr;
}