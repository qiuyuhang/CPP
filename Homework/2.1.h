#ifndef   _MAX_H
#define   _MAX_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void max(vector<int> vecInt) {
	if (vecInt.size() == 0)
		return;
	int maxInt = vecInt[0];
	for (auto i : vecInt) {
		maxInt = (maxInt>i) ? maxInt : i;
	}
	cout << maxInt << endl;
}

void max(vector<float> vecFloat) {
	if (vecFloat.size() == 0)
		return;
	float maxFloat = vecFloat[0];
	for (auto i : vecFloat) {
		maxFloat = (maxFloat>i) ? maxFloat : i;
	}
	cout << maxFloat << endl;
}

void max(vector<string> vecStr) {
	if (vecStr.size() == 0)
		return;
	string maxStr = vecStr[0];
	for (auto i : vecStr) {
		maxStr = (maxStr>i) ? maxStr : i;
	}
	cout << maxStr << endl;
}

void max(int *arrInt, int size) {
	if (size == 0)
		return;
	int maxInt = arrInt[0];
	for (int i = 0; i<size; i++) {
		maxInt = (maxInt>arrInt[i]) ? maxInt : arrInt[i];
	}
	cout << maxInt << endl;
}

void max(float *arrFloat, int size) {
	if (size == 0)
		return;
	float maxFloat = arrFloat[0];
	for (int i = 0; i<size; i++) {
		maxFloat = (maxFloat>arrFloat[i]) ? maxFloat : arrFloat[i];
	}
	cout << maxFloat << endl;
}

void max(string *arrStr, int size) {
	if (size == 0)
		return;
	string maxStr = arrStr[0];
	for (int i = 0; i<size; i++) {
		maxStr = (maxStr>arrStr[i]) ? maxStr : arrStr[i];
	}
	cout << maxStr << endl;
}

#endif