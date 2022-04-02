#define _CRT_SECURE_NO_WARNINGS 1

//求3个数中的最大数（分别考虑整数、实数、长整数的情况）
#include<iostream>

using namespace std;

int max(int a, int b, int c)
{
	if (b>a)
	{
		a = b;
	}
	if (c>a)
	{
		a = c;
	}
	return a;
}

float max(float a, float b, float c)
{
	if (b>a)
	{
		a = b;
	}
	if (c>a)
	{
		a = c;
	}
	return a;
}

long max(long a, long b, long c)
{
	if (b>a)
	{
		a = b;
	}
	if (c>a)
	{
		a = c;
	}
	return a;
}

int main()
{
	int a, b, c;
	float d, e, f;
	long g, h, i;
	cin >> a >> b >> c;
	cin >> d >> e >> f;
	cin >> g >> h >> i;

	int m;
	m = max(a, b, c);
	cout << "max_i=" << m << endl;

	float n;
	n = max(d,e,f);
	cout << "max_f=" << n << endl;

	long p;
	p = max(a, b, c);
	cout << "max_l=" << p << endl;

	system("pause");
	return 0;
}

