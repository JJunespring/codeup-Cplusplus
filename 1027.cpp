#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int y, m, d;
	char dot1, dot2;

	cin >> y >> dot1 >> m >> dot2 >> d;
	cout << setw(2) << setfill('0') << d << '-' << setw(2) << setfill('0') << m << '-' << setw(4) << setfill('0') << y;
}