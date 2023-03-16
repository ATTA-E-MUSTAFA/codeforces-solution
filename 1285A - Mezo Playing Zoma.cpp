
#include <iostream>
using namespace std;

int main() {

    int num;

    cin >> num;

    string s;
    cin >> s;
    int left = 0;
    int right = 0;
    for (int i = 0; s[i] != 0; i++) {
        if (s[i] == 'L') {
            left++;
        }
        else if (s[i] == 'R') {
            right++;
        }
    }

    cout << left + right + 1 << endl;

}