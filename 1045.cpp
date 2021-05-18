#include <iostream>
using namespace std;

int main()
{
	long int a, b;
	cin >> a >> b;
	cout << fixed;
	cout.precision(2);
	cout << a + b << endl << a - b << endl << a * b << endl << a / b << endl << a % b << endl << (float)a / b;
}