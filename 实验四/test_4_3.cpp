#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int ox(int n)
{
	if (n < 4)
		return 1;
	return ox(n - 1) + ox(n - 3);
}

int main()
{
	int n,num;
	while (cin >> n)
	{
		num = ox(n);
		cout << num<<" ";
	}
	system("pause");
	return 0;
}