#include <iostream>
using namespace std;

int main()
{
	long int a, b, c;
	cin >> a >> b >> c;
	cout << fixed;
	cout.precision(1);
	cout << a + b + c << ' ' << (float)(a + b + c) / 3;
}