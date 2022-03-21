#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main()
{
	int n;
	int a[50] = { 0, 1, 1, 2 };
	cout << "ÕýÕûÊýn£º";
	for (int i = 2; i <= 49; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	while (cin >> n)
	{
		cout << a[n] << endl;
	}
	return 0;
}