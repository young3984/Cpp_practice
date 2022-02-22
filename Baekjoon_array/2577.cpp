//#include <iostream>
//using std::cin;
//using std::cout;
//
//int main()
//{
//	int A, B, C, v;
//	int arr[10] = {};
//	cin >> A >> B >> C;
//	int N = A * B * C;
//	while (1) {
//		v = N % 10;
//		arr[v] += 1;
//		if (N < 10) {
//			break;
//		}
//		N /= 10;
//	}
//
//	for (int ik = 0; ik <= 9; ik++) {
//		cout << arr[ik] << "\n";
//	}
//
//	return 0;
//}