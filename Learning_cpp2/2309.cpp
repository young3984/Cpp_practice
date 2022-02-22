//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector <int> arr(9, 0);
//	int ans = 0, c = 0;
//	for (int ik = 0; ik < 9; ik++) {
//		int n;
//		cin >> n;
//		arr[ik] = n;
//		ans += n;
//	}
//	sort(arr.begin(), arr.end());
//	for (int ik = 0; ik < 8; ik++) {
//		for (int it = ik + 1; it < 9; it++) {
//			if (arr[it] == ans - arr[ik]-100) {
//				arr.erase(arr.begin() + it);
//				arr.erase(arr.begin() + ik);
//				c += 1;
//				break;
//			}
//		}
//		if (c == 1) {
//			break;
//		}
//	}
//	for (int ik : arr) {
//		cout << ik << "\n";
//	}
//	return 0;
//}