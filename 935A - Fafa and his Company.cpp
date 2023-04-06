#include<iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	int count = 0;
	for (int i = 1; i < num; i++){
		int value = num - i;
		if (value % i == 0) {
			count++;
		}
	}
	cout << count << endl;
}