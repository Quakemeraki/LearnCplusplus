#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


int main()
{
	char a;
	int m;
	cout << "请输入字符和三角形的高：";
	while (cin>>a>>m)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m - i; j++)
			{
				cout << " ";
			}
			for (int k = 0; k < 2 * i - 1; k++)
			{
				cout << a;
			}

			cout << endl;
		}

	}
	return 0;
}

