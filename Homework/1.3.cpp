#include<iostream>
#include<string>
using namespace std;

void display(string *str)
{
	cout << *str << "(From String*)" << endl;
}

void display(string &str)
{
	cout << str << "(From String&)" << endl;
}

int main()
{
	string str = "Hello World!";

	cout << str << endl;
	display(str);
	display(&str);

	return 0;
}