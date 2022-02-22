#include <iostream>
using namespace std;
int main()
{
	string A, s;
	int B;
	cin >> A >> B;
	for (int ik = 0; ik < B; ik++) {
		s += A;
	}
	for (int ik = 0; ik < B; ik++) {
		cout << s[ik];
	}
	return 0;
}