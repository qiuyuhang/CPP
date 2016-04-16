#include<iostream>
#include<string>
#include<fstream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	string filePath, word;
	fstream inFile, exclusionFile, outFile1, outFile2;
	map <string, int> frequency;
	map <string, int> exclusionWords;
	int maxLen = 0;

	cin >> filePath;//�����ļ�·���������ļ�
	inFile.open(filePath, ios::in);
	exclusionFile.open("exclusion.txt", ios::in);
	outFile1.open("3_1_1out.txt", ios::out);
	outFile2.open("3_1_2out.txt", ios::out);


	while (exclusionFile >> word) //�����ų��ĵ��ʱ�
		++exclusionWords[word];
	exclusionFile.close();

	while (inFile >> word) {//���������ļ���ͳ��Ƶ��
		transform(word.begin(), word.end(), word.begin(), tolower);
		++frequency[word];
	}
	inFile.close();

	for (auto i : frequency) {//����1
		outFile1 << i.first << ": " << i.second << endl;
		maxLen = (maxLen > i.second) ? maxLen : i.second;//������ȡ����ʳ��ȣ������¸�����
	}
	outFile1.close();

	for (; maxLen > 0; maxLen--) //����2
		for (auto i : frequency)
			if (i.second == maxLen)
				outFile2 << i.first << ": " << i.second << endl;
	outFile2.close();

	return 0;
}