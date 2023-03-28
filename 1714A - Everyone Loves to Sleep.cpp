//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int test;
//	cin >> test;
//	while (test--) {
//		int n, H, M;
//		cin >> n >> H >> M;
//		int minH = 0, minM = 0;
//		int* ptrH = new int[n];
//		int ind = 0;
//		while (n--) {
//			minH = 0; minM = 0;
//			int h, m;
//			cin >> h >> m;
//			if (h > H) {
//				int a = H * 60 + M;
//				int leftM = (h * 60 + m) - a;
//
//				if (leftM < 0) {
//					minM *= -1;
//				}
//				ptrH[ind] = leftM;
//				ind++;
//			}
//			else if (h == H && M == m) {
//				minM = 0;
//				ptrH[ind] = minM;
//				ind++;
//			}
//			else if (h < H || (m < M && h == H)) {
//				int a = H * 60 + M;
//
//				int leftM = (24 * 60) - a;
//				minH = (leftM + (h * 60 + m));
//				ptrH[ind] = minH;
//				ind++;
//			}
//			else if (h == H && m > M) {
//				minH = 0;
//				int a = H * 60 + M;
//				int leftM = (h * 60 + m) - a;
//				if (leftM < 0) {
//					leftM *= -1;
//				}
//				ptrH[ind] = leftM;
//				ind++;
//			}
//
//		}
//		int minMs = ptrH[0];
//		int b = 0;
//		for (int i = 1; i < ind; i++) {
//			if (minMs > ptrH[i]) {
//				minMs = ptrH[i];
//				b = i;
//			}
//		}
//		int a = minMs / 60;
//		int ba = minMs % 60;
//		cout << a << " " << ba << endl;
//
//	}
//}