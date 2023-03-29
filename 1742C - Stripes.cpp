#include<iostream>
using namespace std;

bool rowSearching(char arr[][9]) {

	int countR = 0;
	int flag = 0;
	for (int i = 0; i < 8 && flag == 0; i++)
	{
		countR = 0;

		for (int j = 0; j < 8 && flag == 0; j++) {
			if (arr[i][j] == 'R') {
				countR++;
			}
			else {
				continue;
			}
		}
		if (countR == 8) {
			cout << "R" << endl;
			flag = 1;

		}

	}


	if (flag == 1) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	int test;
	cin >> test;
	char arr[8][9];
	while (test--) {

		for (int i = 0; i < 8; i++) {
			cin >> arr[i];
		}
		int value = rowSearching(arr);
		if (value == 0) {
			cout << "B\n";

		}
	}

}
