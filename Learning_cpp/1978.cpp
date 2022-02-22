//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n, M, k;
//	cin >> n;
//	vector <int> arr;
//	vector <int> prime;
//	for (int ik = 0; ik < n; ik++) {
//		int a;
//		cin >> a;
//		arr.push_back(a);
//	}
//	M = *max_element(arr.begin(), arr.end());
//	for (int ik = 2; ik <= M; ik++) {
//		prime.push_back(ik);
//	}
//	for (int ik : prime) {
//		for (int it : prime) {
//			if ((it > ik) & (it % ik == 0)) {
//				prime.erase(remove(prime.begin(), prime.end(), it), prime.end());
//			}
//		}
//	}
//	k = n;
//	for (int ik : arr) {
//		auto a = find(prime.begin(), prime.end(), ik);
//		if (a == prime.end()) {
//			k -= 1;
//		}
//	}
//	cout << k;
//	return 0;
//}