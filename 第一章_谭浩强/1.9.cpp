#define _CRT_SECURE_NO_WARNINGS 1

//�˽����úͱ����Ĺ�ϵ

#include<iostream>

using namespace std;

int main()
{
	int a = 10;
	int &b = a;
	a = a*a;
	cout << a << b << endl;
	b = b / 5;
	cout << b << a << endl;

	system("pause");
	return 0;
}