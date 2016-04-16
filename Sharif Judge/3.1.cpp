#include <iostream>
#include <string>
#include <vector>
#include"2.1.h"
using namespace std;

int main()
{
	vector<int> vecInt = { 1,2,3,4,5,6,7 };
	vector<float> vecFlt = { 1,2,3,4,5,6,7 };
	vector<string> vecStr = { "1","2","3","4","5","6","7" };
	int arrInt[] = { 1,2,3,4,5,6,7 };
	float arrFlt[] = { 1,2,3,4,5,6,7 };
	string arrStr[] = { "1","2","3","4","5","6","7" };

	max(vecInt);
	max(vecFlt);
	max(vecStr);
	max(arrInt, 7);
	max(arrFlt, 7);
	max(arrStr, 7);

	return 0;
}