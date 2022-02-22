//#include <iostream>
//using namespace std;
//int main()
//{
//	string s;
//	int N, c = 0, k = 0;
//	cin >> N;
//	for (int ik = 0; ik < N; ik++) {
//		cin >> s;
//		int arr[26] = {};
//		for (int it = 0; it < s.length(); it++) {
//			if (arr[int(s[it]) - 97] == 0) {
//				arr[int(s[it]) - 97] = 1;
//			}
//			else if (arr[int(s[it]) - 97] == 1) {
//				if (s[it - 1] != s[it]) {
//					c = 1;
//					break;
//				}
//			}
//		}
//		if (c == 0) {
//			k++;
//		}
//		c = 0;
//	}
//	cout << k;
//	return 0;
//}