#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main()
{
	int a = 10;
	int &b = a;
	int c = 20;
	b = c;//��ֵ���������Ǹ�������
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	system("pause");
	return 0;
}