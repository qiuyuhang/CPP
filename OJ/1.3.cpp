#include<iostream>
#include<string>
using namespace std;

int main()
{
	string state;
	int length , num = 0;
	cin >> length >> state;
	for (int i = 0; i < length; i++) {
		int LPos = 0, RPos = 0;
		if (state[i] == '.') {
			for (int j = i; j >= 0 && state[j] != 'L'; j--) {
				if (state[j] == 'R') LPos = i - j;
			}
			for (int j = i; j <length && state[j] != 'R'; j++) {
				if (state[j] == 'L') RPos = i - j;
			}
			if ((LPos + RPos) == 0) ++num;
		}
	}
	cout << num << endl;

	return 0;
}