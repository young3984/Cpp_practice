//#include <iostream>
//using std::cin;
//using std::cout;
//
//int main()
//{
//	int N, c = 0;
//	cin >> N;
//	int n = N;
//	while (1) {
//		c += 1;
//		if (N < 10) {
//			N = N * 10 + N;
//		}
//		else {
//			N = (N / 10 + N % 10) % 10 + (N % 10) * 10;
//		}
//		if (n == N) {
//			cout << c;
//			break;
//		}
//	}
//
//	return 0;
//}