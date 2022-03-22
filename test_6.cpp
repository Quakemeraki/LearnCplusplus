#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main()
{
	int a, i, n;
	double aver, sum;

	while (cin >> n)
	{
		sum = 0;
		for (i = 0; i < n; i++)
		{
			cin >> a;
			sum += a;
		}
		aver = sum / n;
		printf("%0.3f", aver);
	}
	return 0;
}