//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main()
//{
//	int N, K, n, ans = 0;
//	vector <int> arr;
//	cin >> N >> K;
//	for (int ik = 0; ik < N; ik++) {
//		cin >> n;
//		arr.push_back(n);
//	}
//	sort(arr.begin(), arr.end());
//	reverse(arr.begin(), arr.end());
//	for (int ik : arr) {
//		ans += K / ik;
//		K = K % ik;
//	}
//	cout << ans;
//	return 0;
//}