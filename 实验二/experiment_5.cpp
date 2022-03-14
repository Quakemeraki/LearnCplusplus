#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cout << "请输入格式阵列的阶数：";
	while (cin>>n)
	{
		for (int i = 1; i <= n; i++)
		{
			cout << " " << i <<"  ";
			int k = i - 1;
			for (int j = 0; j < n; j++)
			{
				cout << "  " << k;
				k = (k + 1) % n;
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}