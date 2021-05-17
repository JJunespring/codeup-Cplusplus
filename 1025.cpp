#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num,pr;
	cin >> num;
	
	for (int i = 5; i > 0; i--)
	{
		if (i == 5) cout << '[' << num / (int)pow(10, i - 1) * (int)pow(10, i - 1)  << ']' << endl;
		else cout << '[' << num / (int)pow(10, i - 1) * (int)pow(10, i - 1) - pr << ']' << endl;
		pr = num / (int)pow(10, i - 1) * (int)pow(10, i - 1);
	}
}