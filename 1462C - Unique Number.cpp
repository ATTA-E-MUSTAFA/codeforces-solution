//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int num;
//    cin >> num;
//    while (num--) {
//        int value;
//        int c;
//        cin >> value;
//        int arr[100];
//        int ind = 0;
//        int flag = 0;
//        int sum = 0;
//        if (value <= 9) {
//            cout << value << endl;
//            flag = 1;
//        }
//        else {
//            int rem = 1;
//
//            for (int i = 9; flag == 0 && i > 0; i--) {
//                // cout<<sum+i<<endl;
//                if (sum + i <= value) {
//                    sum += i;
//                    arr[ind] = i;
//                    //cout<<i<<endl;
//                    ind++;
//                }
//                if (sum == value) {
//                    flag = 1;
//                }
//            }
//
//        }
//        if (flag == 1 && sum != 0) {
//            for (int i = ind - 1; i >= 0; i--) {
//                cout << arr[i];
//            }
//            cout << "\n";
//        }
//        else if (flag == 0 && sum != 0) {
//            cout << "-1" << endl;
//        }
//
//    }
//}