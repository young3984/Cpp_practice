//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int A, B, ans = 0, n = 0;
//	vector <int> arr;
//	cin >> A >> B;
//	for (int ik = 2; ik <= B; ik++) {
//		arr.push_back(ik);
//	}
//	for (int ik : arr) {
//		for (int it : arr) {
//			if ((it > ik) & (it % ik==0)) {
//				arr.erase(remove(arr.begin(), arr.end(), it), arr.end());
//			}
//		}
//	}
//	for (int ik : arr) {
//		if (ik >= A) {
//			ans += ik;
//			if (n == 0) {
//				n = ik;
//			}
//		}
//	}
//	if (n == 0) {
//		cout << -1;
//	}
//	else {
//		cout << ans << "\n" << n;
//	}
//	return 0;
//}