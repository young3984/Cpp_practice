//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string sen[2];
//	string s[3];
//	int t[2][3] = {};
//	int tt[3] = {};
//	for (int ik = 0; ik < 2; ik++) {
//		cin >> sen[ik];
//		s[0] = sen[ik][0]; s[1] = sen[ik][1]; s[2] = s[0] + s[1]; t[ik][0] = stoi(s[2]);
//		s[0] = sen[ik][3]; s[1] = sen[ik][4]; s[2] = s[0] + s[1]; t[ik][1] = stoi(s[2]);
//		s[0] = sen[ik][6]; s[1] = sen[ik][7]; s[2] = s[0] + s[1]; t[ik][2] = stoi(s[2]);
//	}
//	tt[2] = t[1][2] - t[0][2];
//	if (tt[2] < 0) {
//		tt[2] += 60; t[1][1] -= 1;
//	}
//	tt[1] = t[1][1] - t[0][1];
//	if (tt[1] < 0) {
//		tt[1] += 60; t[1][0] -= 1;
//	}
//	tt[0] = t[1][0] - t[0][0];
//	if (tt[0] < 0) {
//		tt[0] += 24;
//	}
//	printf("%02d:%02d:%02d", tt[0], tt[1], tt[2]);	
//	return 0;
//}