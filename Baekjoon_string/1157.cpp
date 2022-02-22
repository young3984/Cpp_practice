//#include <iostream>
//using namespace std;
//int main()
//{
//	string s;
//	int m, k;
//	int arr[26] = {};
//	cin >> s;
//	for (int ik = 0; ik < s.length(); ik++) {
//		if (int(s[ik]) < 91) {
//			arr[int(s[ik]) - 65] += 1;
//		}
//		if (int(s[ik]) > 90) {
//			arr[int(s[ik]) - 97] += 1;
//		}
//	}
//	m = arr[0]; k = 1;
//	char c = 'A';
//
//	for (int ik = 1; ik < 26; ik++) {
//		if (m < arr[ik]) {
//			m = arr[ik];
//			k = 1;
//			c = char(ik + 65);
//		}
//		else if (m == arr[ik]) {
//			k += 1;
//		}
//	}
//	if (k == 1) {
//		cout << c;
//	}
//	else {
//		cout << '?';
//	}
//
//	return 0;
//}