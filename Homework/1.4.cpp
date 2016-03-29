#include<iostream>
#include<string>
using namespace std;

typedef struct {
	string stuName;
	string stuAddr;
	int stuID;
}Student;

int main()
{
	Student Lihua;
	Lihua.stuID = 1552629;
	Lihua.stuName = "Li Hua";
	Lihua.stuAddr = "ShangHai";
	cout << Lihua.stuID << " : " << Lihua.stuName << " @ " << Lihua.stuAddr << endl;

	Student *p_QYH = &Lihua;
	p_QYH->stuID = 1552630;
	p_QYH->stuAddr = "JiangXi";
	p_QYH->stuName = "Qiu Yuhang";
	cout << Lihua.stuID << " : " << Lihua.stuName << " @ " << Lihua.stuAddr << endl;

	return 0;
}