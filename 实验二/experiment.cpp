#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
	char a;
	int m;
	cout << "请输入字符和边长：";
	while (cin>>a>>m)
	{
		for (int i = 1; i <= m; i++)//打印上半部分棱形行数
		{
			for (int j = 0; j <= m - i; j++)//打印空格
			{
				cout << " ";
			}
			for (int k = 1; k <= 2*i-1; k++)//打印字符
			{
				cout << a;
			}
			cout << endl;
		}
		for (int i = 1; i <= m; i++)//打印下半部分棱形行数
		{
			for (int j = 0; j <= i; j++)//打印空格
			{
				cout << " ";
			}
			for (int k = 1; k <=2*(m-i)-1; k++)//打印字符
			{
				cout << a;
			}
			cout << endl;
		}
	}
	return 0;
}