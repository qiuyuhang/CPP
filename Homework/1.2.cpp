#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<double> dblVec;

	for (int i = 0; i < 25; i++) {
		dblVec.push_back(i*1.1);//�����������25������
	}

	for (int i = 0; i < 25; i++) {
		cout << dblVec[i] << " ";//�������
	}
	cout << endl;

	for (int i = 0; i < 25; i++) {
		dblVec[i] *= dblVec[i];//����ƽ��
	}

	for (int i = 0; i < 25; i++) {
		cout << dblVec[i] << " ";//�������
	}

	return 0;
}