#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int m;
	cout << "�����������εĸߣ�";
	while (cin>>m)
	{
		for (int i = 1; i <= m; i++)
		{
			for (int k = 1; k <=i-1; k++)
			{
				cout << " ";
			}
			for (int j = 1; j <= m-i; j++)
			{
				cout << "S";
				cout << "T";
			}
			cout << "S";
			cout << endl;
		}
	}
	return 0;
}