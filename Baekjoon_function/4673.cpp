//#include <iostream>
//#include <vector>
//using namespace std;
//
//int kaprekar(int n) {
//	int all = n;
//	while (1) {
//		all += n % 10;
//		if (n < 10) {
//			break;
//		}
//		n /= 10;
//	}
//	return all;
//}
//
//int main()
//{
//	vector <int> arr(10001,0);
//	int a;
//	for (int ik = 1; ik < 10001; ik++) {
//		a = kaprekar(ik);
//		if (a < 10001) {
//			arr.at(a) = 1;
//		}
//	}
//
//	for (int ik = 1; ik < 10001; ik++) {
//		if (arr.at(ik) == 0) {
//			cout << ik << "\n";
//		}
//	}
//
//	return 0;
//}