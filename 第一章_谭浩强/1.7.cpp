#define _CRT_SECURE_NO_WARNINGS 1

//��һ��������2��������3�������е����ֵ

#include<iostream>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int max(int a, int b, int c)
{
	if (a<b)
	{
		a = b;
	}
	if (a<c)
	{
		a = c;
	}
	return a;
}

int main()
{
	int a = 7, b = -4, c = 9;
	cout << "max-3=" << max(a, b, c) << endl;
	cout << "max_2=" << max(a, b) << endl;

	system("pause");
	return 0;
}