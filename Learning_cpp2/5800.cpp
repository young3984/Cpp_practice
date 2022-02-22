//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N;
//	for (int ik = 0; ik < N; ik++) {
//		int n, m = 100, M = 0, s;
//		cin >> n;
//		vector <int> arr(n, 0);
//		vector <int> dif(n - 1, 0);
//		for (int it = 0; it < n; it++) {
//			cin >> s;
//			arr[it]=s;
//		}
//		sort(arr.begin(), arr.end());
//		for (int it = 0; it < n - 1; it++) {
//			dif[it]=arr[it + 1] - arr[it];
//		}
//		sort(dif.begin(), dif.end());
//		printf("Class %d\nMax %d, Min %d, Largest gap %d\n", ik + 1, arr[n-1], arr[0], dif[n-2]);
//	}
//	return 0;
//}