
#include <iostream>
using namespace std;
int main() {



    int arr;
    cin >> arr;
    int flag = 0;
    int num2 = 0;
    for (int k = 0; flag == 0; k++) {
        int num = arr;
        num2 = arr;
        int sum = 0;
        for (int j = 0; num != 0; j++) {
            int rem = num % 10;
            num /= 10;
            sum += rem;
        }
        if (sum % 4 == 0) {
            flag = 1;
        }
        else {
            arr++;
        }

    }
    cout << num2 << endl;
}
