#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string str1, string str2) {
	if (str1.length() < str2.length())
		return true;
	else
		return false;
}

int main()
{
	string inFilePath, word;
	fstream inFile, outFile;
	vector <string> wordList;

	cin >> inFilePath;//读入路径，打开文件
	inFile.open(inFilePath, ios::in);
	outFile.open("3_2out.txt", ios::out);

	while (inFile >> word) {//处理输入
		transform(word.begin(), word.end(), word.begin(), tolower);
		if (find(wordList.begin(), wordList.end(), word) == wordList.end())
			wordList.push_back(word);
	}
	inFile.close();

	sort(wordList.begin(), wordList.end(), compare);//整理并输出结果
	for (auto i : wordList)
		outFile << i << endl;
	outFile.close();

	return 0;
}