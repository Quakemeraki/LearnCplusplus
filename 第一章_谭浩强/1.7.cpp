#define _CRT_SECURE_NO_WARNINGS 1

//用一个函数求2个整数或3个整数中的最大值

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