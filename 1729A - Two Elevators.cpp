#include <iostream>
using namespace std;

int main() {

    int test = 0;
    cin >> test;
    while (test--) {
        int a, b, c;
        cin >> a >> b >> c;
        int time1 = a - 1;
        int time2 = c - b;
        if (time2 < 0) {
            time2 *= -1;
        }
        if (c != 1) {
            time2 += c - 1;
        }
        if (time1 == time2) {
            cout << 3 << endl;
        }
        else if (time1 < time2) {
            cout << 1 << endl;
        }
        else if (time2 < time1) {
            cout << 2 << endl;
        }
    }
}