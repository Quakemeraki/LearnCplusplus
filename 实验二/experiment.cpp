#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
	char a;
	int m;
	cout << "�������ַ��ͱ߳���";
	while (cin>>a>>m)
	{
		for (int i = 1; i <= m; i++)//��ӡ�ϰ벿����������
		{
			for (int j = 0; j <= m - i; j++)//��ӡ�ո�
			{
				cout << " ";
			}
			for (int k = 1; k <= 2*i-1; k++)//��ӡ�ַ�
			{
				cout << a;
			}
			cout << endl;
		}
		for (int i = 1; i <= m; i++)//��ӡ�°벿����������
		{
			for (int j = 0; j <= i; j++)//��ӡ�ո�
			{
				cout << " ";
			}
			for (int k = 1; k <=2*(m-i)-1; k++)//��ӡ�ַ�
			{
				cout << a;
			}
			cout << endl;
		}
	}
	return 0;
}