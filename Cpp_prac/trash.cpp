#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	for (int ik = 0; ik < N; ik++) {
		for (int it = 0; it <= ik; it++) {
			cout << "*";
		}
		for (int it = 0; it < N - ik; it++) {
			cout << " ";
		}
		cout << "\n";
	}
	return 0;
}