#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cout << "�������ʽ���еĽ�����";
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