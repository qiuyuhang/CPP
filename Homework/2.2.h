#ifndef   _MAX_H
#define   _MAX_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
void max(vector<T> arr) {
	if (arr.size() == 0)
		return;
	T result = arr[0];
	for (auto i : arr) {
		result = (result > i) ? result : i;
	}
	cout << result << endl;
}

template <typename T>
void max(T *arr, int size) {
	if (size == 0)
		return;
	T result = arr[0];
	for (int i = 0; i < size; i++) {
		result = (result > arr[i]) ? result : arr[i];
	}
	cout << result << endl;
}

#endif