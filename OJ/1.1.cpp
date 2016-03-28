#include<iostream>
#include <string>
using namespace std;

int main()
{
	string mood;
	cin >> mood;
	if (mood.find("0000000") == -1 && mood.find("1111111") == -1) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}