
#include <iostream>
using namespace std;

int main() {

    int n, d;
    cin >> n >> d;
    static int cons = 0;
    int arr[d];
    int ind = 0;
    while (d--) {
        char ch[n + 1];
        cin >> ch;
        int zeroFlag = 0;
        for (int i = 0; ch[i] != 0 && zeroFlag == 0; i++) {
            if (ch[i] == '0') {
                zeroFlag = 1;
                cons++;
            }
            else {
                zeroFlag = 0;
            }
        }
        if (zeroFlag == 0 && cons >= 1) {
            arr[ind] = cons;
            ind++;
            cons = 0;
        }

    }
    if (cons >= 1) {
        arr[ind] = cons;
        ind++;
    }
    int max = 0;
    for (int i = 0; i < ind; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    cout << max << endl;
}