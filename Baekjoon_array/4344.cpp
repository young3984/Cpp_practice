//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int N, m, all = 0, n = 0;
//	float avg;
//	cin >> N;
//	int arr[1000] = {};
//	for (int ik = 0; ik < N; ik++) {
//		cin >> m;
//		all = 0; n = 0;
//		for (int it = 0; it < m; it++) {
//			cin >> arr[it];
//			all += arr[it];
//		}
//		avg = all / float(m);
//		for (int it = 0; it < m; it++) {
//			if (arr[it] > avg) {
//				n += 1;
//			}
//		}
//		cout << fixed;
//		cout.precision(3);
//		cout << n / float(m) * 100 << "%" << "\n";
//		cout.unsetf(ios::fixed);
//	}
//
//	return 0;
//}