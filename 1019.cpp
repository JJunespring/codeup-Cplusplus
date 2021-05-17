#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char dot1, dot2;
	int year, month, day;

	cin >> year >> dot1 >> month >> dot2 >> day;
	cout << setw(4) << setfill('0') << year << "." << setw(2) << setfill('0') << month << "." << setw(2) << setfill('0') << day;
}