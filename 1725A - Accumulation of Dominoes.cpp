
#include <iostream>
using namespace std;
long long n, m;
int main() {
    cin >> n >> m;
    long long res = 0;
    if (m == 1) res = n - 1;
    else res = n * (m - 1);
    cout << res << endl;
    return 0;
}

