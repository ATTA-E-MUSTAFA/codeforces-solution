#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int num = 0;
    for (int i = 0; s[i] != 0; i++) {

        if (s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9') {
            num++;
        }
        else if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            num++;
        }
    }
    cout << num << endl;
}