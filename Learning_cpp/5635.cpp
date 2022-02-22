//#include <iostream>
//#include <vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string n, Name, name;
//	vector <int>  b(3, 0), B(3, 0), temp(3, 0);
//	vector<vector<int>> bir(2, vector<int>(3, 0));
//	int N;
//	cin >> N;
//	cin >> Name; name = Name;
//	cin >> b[2] >> b[1] >> b[0]; B = b; 
//	for (int ik = 0; ik < N - 1; ik++) {
//		cin >> n;
//		cin >> temp[2] >> temp[1] >> temp[0];
//		bir[0] = b; bir[1] = temp;
//		sort(bir.begin(), bir.end());
//		if (bir[1] != b) {
//			b = bir[1];
//			name = n;
//		}
//		bir[0] = B; bir[1] = temp;
//		sort(bir.begin(), bir.end());
//		if (bir[0] != B) {
//			B = bir[0];
//			Name = n;
//		}
//	}
//	cout << name << "\n";
//	cout << Name << "\n";
//	return 0;
//}