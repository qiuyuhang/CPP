#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(int argc, char *argv[])//����ͨ�����δ��ļ������޲�����Ĭ�ϴ�in.txt�ļ�
{
	fstream inFile;
	if (argc == 1) inFile.open("in.txt");
	if (argc == 2) inFile.open(argv[1]);
	string word;
	int times = 0;

	while (inFile >> word) {
		if (word == "that") ++times;
	}
	cout << times << endl;

	return 0;
}