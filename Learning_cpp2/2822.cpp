//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int ans = 0;
//	vector <vector<int>> arr(8, vector<int>(2, 0));
//	for (int ik = 0; ik < 8; ik++) {
//		int sco;
//		cin >> sco;
//		arr[ik][0] = sco;
//		arr[ik][1] = ik;
//	}
//	sort(arr.begin(), arr.end());
//	for (int ik = 3; ik < 8; ik++) {
//		ans += arr[ik][0];
//	}
//	cout << ans << "\n";
//	vector <int> rank(5, 0);
//	for (int ik = 3; ik < 8; ik++) {
//		rank[ik-3] = arr[ik][1];
//	}
//	sort(rank.begin(), rank.end());
//	for (int ik : rank) {
//		cout << ik + 1 << " ";
//	}
//	return 0;
//}