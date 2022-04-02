#define _CRT_SECURE_NO_WARNINGS 1

//输入3个字符串，要求按字母由小到大顺序输出

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string string1, string2, string3;
	cout << "please input three strings: ";
	cin >> string1 >> string2 >> string3;
	if (string3 > string2)
	{
		string temp = string2;
		string2 = string3;
		string3 = temp;
	}
	if (string2>string1)
	{
		string temp = string2;
		string2 = string1;
		string2 = temp;
	}
	if (string2 > string3)
	{
		string temp = string2;
		string2 = string3;
		string3 = temp;
	}
	cout << string1 << "  " << string2 << "  " << string3 << endl;
	system("pause");
	return 0;
}