#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char mid;
	int front, back;

	cin >> front >> mid >> back;
	cout << setw(6) << setfill('0') << front << setw(7) << setfill('0') << back;
}