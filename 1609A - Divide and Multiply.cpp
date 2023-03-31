//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//long long solve(int len) {
//	long long* ptr = new long long[len];
//	for (int i = 0; i < len; i++) {
//		cin >> ptr[i];
//	}
//	sort(ptr, ptr + len);
//	long long int sum = 0;
//
//	if (ptr[len - 1] % 2 == 0) {
//		int countD = 0;
//		int flag = 0;
//		while (flag == 0) {
//			while (ptr[len - 1] % 2 == 0) {
//				countD++;
//				ptr[len - 1] /= 2;
//			}
//			sort(ptr, ptr + len);
//			if (ptr[len - 1] % 2 != 0) {
//				flag = 1;
//			}
//		}
//		for (int i = 0; i < len - 1; i++) {
//			while (ptr[i] % 2 == 0) {
//				ptr[i] /= 2;
//				countD++;
//			}
//		}
//		for (int i = 0; i < countD; i++) {
//			ptr[len - 1] *= 2;
//		}
//		for (int i = 0; i < len; i++) {
//			sum += ptr[i];
//		}
//	}
//	else {
//		int countD = 0;
//		for (int i = 0; i < len - 1; i++) {
//			while (ptr[i] % 2 == 0) {
//				ptr[i] /= 2;
//				countD++;
//			}
//		}
//		for (int i = 0; i < countD; i++) {
//			ptr[len - 1] *= 2;
//		}
//		for (int i = 0; i < len; i++) {
//			sum += ptr[i];
//		}
//	}
//
//	delete[] ptr;
//	return sum;
//}
//
//int main() {
//
//	int test;
//	cin >> test;
//	while (test--) {
//		int len;
//		cin >> len;
//		long long value = solve(len);
//		cout << value << endl;
//	}
//
//}
