#define _CRT_SECURE_NO_WARNINGS 1

/*
�Ӽ�������������a��b���������е������
*/

#include<iostream>

using namespace std;

int main()
{
	int max(int x,int y);
	int a, b, c;
	cin >> a >> b;
	c = max(a, b);
	cout << "max=" << c << endl;


	system("pause");
	return 0;
}

int max(int x, int y)
{
	int z;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}