#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main()
{
	cout << "�����벻����50��������n��";
	int n,sum,num;
	
	while (cin >> n)
	{
		sum = 0;
		num = 1;
		for (int i = 1; i <= n; i++)
		{
			num *= i;
			sum += num;
		}
		cout << sum << endl;
	}

	return 0;
}