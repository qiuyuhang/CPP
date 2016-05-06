#include<iostream>
#define _TRAVERSAL_ROW for (int i = 0; i < n; ++i)
#define _TRAVERSAL_COLUMN for (int j = 0; j < m; ++j)
using namespace std;

int n, m, k;
char maze[500][500];
bool fillGraph[500][500] = { 0 };

void fillUp(int y, int x)
{
	if (y<0 || y >= n || x<0 || x >= m || maze[y][x] != '.' || fillGraph[y][x] || k == 0)
		return;
	fillGraph[y][x] = 1;
	fillUp(y - 1, x);
	fillUp(y, x - 1);
	fillUp(y + 1, x);
	fillUp(y, x + 1);
	if (k) {
		maze[y][x] = 'X';
		k--;
	}
}

int main()
{
	cin >> n >> m >> k;
	_TRAVERSAL_ROW cin >> maze[i];
	_TRAVERSAL_ROW _TRAVERSAL_COLUMN
		if (maze[i][j] == '.') fillUp(i, j);

	_TRAVERSAL_ROW cout << maze[i] << endl;
	return 0;
}