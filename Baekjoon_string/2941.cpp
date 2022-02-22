//#include <iostream>
//using namespace std;
//int main()
//{
//	string s;
//	int w = 0, ik = 0;
//	cin >> s;
//	s = s + "0";
//	while (1) {
//		if (s[ik] == 'c') {
//			if ((s[ik + 1] == '-') | (s[ik + 1] == '=')) {
//				ik += 2;
//			}
//			else {
//				ik += 1;
//			}
//		}
//		else if (s[ik] == 'd') {
//			if (s[ik + 1] == 'z') {
//				if (s[ik + 2] == '=') {
//					ik += 3;
//				}
//				else {
//					ik += 1;
//				}
//			}
//			else if (s[ik + 1] == '-') {
//				ik += 2;
//			}
//			else {
//				ik += 1;
//			}
//		}
//		else if (s[ik] == 'l') {
//			if (s[ik + 1] == 'j') {
//				ik += 2;
//			}
//			else {
//				ik += 1;
//			}
//		}
//		else if (s[ik] == 'n') {
//			if (s[ik + 1] == 'j') {
//				ik += 2;
//			}
//			else {
//				ik += 1;
//			}
//		}
//		else if (s[ik] == 's') {
//			if (s[ik + 1] == '=') {
//				ik += 2;
//			}
//			else {
//				ik += 1;
//			}
//		}
//		else if (s[ik] == 'z') {
//			if (s[ik + 1] == '=') {
//				ik += 2;
//			}
//			else {
//				ik += 1;
//			}
//		}
//		else {
//			ik += 1;
//		}
//		w += 1;
//		if (s[ik] == '0') {
//			break;
//		}
//	}
//	cout << w;
//	return 0;
//}