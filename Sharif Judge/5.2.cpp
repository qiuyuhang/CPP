#include<iostream>  
#define _TRAVERSAL_ROW for (int i = 0; i < n; ++i)
#define _TRAVERSAL_COLUMN for (int j = 0; j < m; ++j)
using namespace std;

int n, m, flag = 0;
char board[50][50];
bool visited[50][50] = { 0 };

bool searchCycle(int i, int j, int lastDirection)
{
	if (visited[i][j]) return 1;
	visited[i][j] = 1;
	if (board[i][j] == board[i - 1][j] && lastDirection != 2) if (searchCycle(i - 1, j, 1)) return 1;
	if (board[i][j] == board[i + 1][j] && lastDirection != 1) if (searchCycle(i + 1, j, 2)) return 1;
	if (board[i][j] == board[i][j - 1] && lastDirection != 4) if (searchCycle(i, j - 1, 3)) return 1;
	if (board[i][j] == board[i][j + 1] && lastDirection != 3) if (searchCycle(i, j + 1, 4)) return 1;
	return 0;
}

int main()
{
	cin >> n >> m;
	_TRAVERSAL_ROW cin >> board[i];

	_TRAVERSAL_ROW _TRAVERSAL_COLUMN
		if (!visited[i][j] && searchCycle(i, j, 0))
			flag = 1;
	cout << (flag ? "Yes" : "No") << endl;
	return 0;
}