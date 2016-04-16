#include<iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	cout << ((n - 1)*(n - 1) + (n + 1)*k)*n / 2 << endl;
	int x = 1, y = n*(k - 1) + 1;
	while (y < n*n) {
		for (int a = 0; a<k - 1; a++) 
	while (y <= n*n) {
		for (int a = 0; a<k - 1; a++) 
			cout << x++ << " ";
		for (int b = 0; b<=n - k; b++) 
			cout << y++ << " ";
		cout << endl;
	}

	return 0;
}
