//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n, ans = 0;
//	vector <int> arr;
//	for (int ik = 0; ik < 9; ik++) {
//		cin >> n;
//		arr.push_back(n);
//		ans += n;
//	}
//	n = 0;
//	for (int ik = 0; ik < 8; ik++) {
//		for (int it = 1; it < 9; it++) {
//			if (arr[it] == ans - 100 - arr[ik]) {
//				n += 1;
//				arr.erase(arr.begin() + it);
//				arr.erase(arr.begin() + ik);
//				break;
//			}
//		}
//		if (n != 0) {
//			break;
//		}
//	}
//	for (int ik : arr) {
//		cout << ik << "\n";
//	}
//	return 0;
//}