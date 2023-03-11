
#include<iostream>
using namespace std;

int main() {

    int test;
    cin >> test;

    for (int i = 0; i < test; i++) {

        int num;
        cin >> num;
        int arr[num];
        int arr2[num] = { 0 };
        for (int j = 0; j < num; j++) {
            cin >> arr[j];
            arr2[arr[j] - 1]++;
        }
        int value = 0;
        int flag = 0;
        for (int j = 0; j < num && flag == 0; j++) {
            if (arr2[j] >= 3) {
                value = j + 1;
            }

        }
        if (value == 0) {
            cout << -1 << endl;

        }
        else {
            cout << value << endl;
        }
    }

