#include<iostream>
#include<fstream>
#include<iterator>

using namespace std;

int main()
{
	ofstream outFile1, outFile2;
	istream_iterator<int> inIterator(cin), eof;
	ostream_iterator<int> outIterator1(outFile1);//�����������ֵ�����������������
	ostream_iterator<int> outIterator2(outFile2);
	ostream_iterator<char> outPuncIterator1(outFile1);//���������ַ�������������������
	ostream_iterator<char> outPuncIterator2(outFile2);


	outFile1.open("3_3_1out.txt", ios::out);//�����ļ�
	outFile2.open("3_3_2out.txt", ios::out);

	while (inIterator != eof) //��ȡ�����ļ�д������
		if (*inIterator % 2 == 0) {
			*outIterator1++ = *inIterator++;
			*outPuncIterator1++ = ' ';
		}
		else {
			*outIterator2++ = *inIterator++;
			*outPuncIterator2++ = '\n';
		}

	outFile1.close();
	outFile2.close();

	return 0;
}