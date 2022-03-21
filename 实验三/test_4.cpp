#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<algorithm>
using namespace std;

int number(int a, int b)
	{
		int m = max(a, b);
		int n = min(a, b);
		if (m%n==0)
		{
			return n;
		}
		return number(m%n, n);
	}

int main()
{
	int a, b;
	cout << "ÇëÊäÈëÊý¾Ý£º";
	while (cin>>a>>b)
	{
		int num=number(a, b);
		cout << num << endl;
	}
	return 0;
}