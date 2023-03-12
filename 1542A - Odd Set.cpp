#include<iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    for (int i = 0; i < test; i++) {
        int num;
        cin >> num;
        int arr[2 * num];
        int odd = 0;
        int even = 0;
        for (int j = 0; j < 2 * num; j++) {
            cin >> arr[j];
            if (arr[j] % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
        if (odd == even) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
}