#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main()
{
	cout << "请输入正整数：";
	int a, b,temp;
	while (cin>>a>>b)
	{
		if (a<b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		for (int i = a; i > 0; i++)
		{
			if (i%a == 0 && i%b == 0)
			{
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}