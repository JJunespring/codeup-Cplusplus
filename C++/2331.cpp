#include<iostream>
using namespace std;

int main()
{
	int col, row, num = 1;
	cin >> col >> row;

	int number[101][101];

	for (int i = 0; i < col + row - 1; i++)
	{
		for (int j = (i < col ? i : col - 1); j >= 0 && i - j < row; j--)
		{
			number[j][i - j] = num;
			num++;
		}
	}

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cout << number[i][j] << ' ';
		}
		cout << endl;
	}
}