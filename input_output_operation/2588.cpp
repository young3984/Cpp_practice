#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int a, b;

	cin >> a;
	cin >> b;
	cout << a * (b % 10) << "\n";
	cout << a * ((b / 10)%10) << "\n";
	cout << a * (b / 100) << "\n";
	cout << a * b << "\n";

	return 0;
}