#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	cout << "请输入格式阵列的阶数：";
	while (cin >> n)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cout << " " << "(" << i << "," << j << ")";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}