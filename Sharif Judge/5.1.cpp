#include<iostream>
#include<string>
using namespace std;

int main()
{
	char square[4][4];
	bool flag = 0;
	for (int i = 0; i < 3; i++)
		cin >> square[i++];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (square[i][j] + square[i][j + 1] + square[i + 1][j] + square[i + 1][j + 1] <= '#' * 3 + '.' * 1 ||
				square[i][j] + square[i][j + 1] + square[i + 1][j] + square[i + 1][j + 1] >= '#' * 1 + '.' * 3)
				flag = 1;

	cout << (flag ? "YES" : "NO") << endl;
	return 0;
}