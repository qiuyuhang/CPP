#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<double> dblVec;

	for (int i = 0; i < 25; i++) {
		dblVec.push_back(i*1.1);//向容器中填充25个数字
	}

	for (int i = 0; i < 25; i++) {
		cout << dblVec[i] << " ";//输出数字
	}
	cout << endl;

	for (int i = 0; i < 25; i++) {
		dblVec[i] *= dblVec[i];//计算平方
	}

	for (int i = 0; i < 25; i++) {
		cout << dblVec[i] << " ";//输出数字
	}

	return 0;
}