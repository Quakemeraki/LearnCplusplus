#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	cout << "����������n��q��";
	int n;
	double q, sum, num;
	while (cin>>n>>q)
	{
		sum = 1;
		num = 1;
		for (int i = 1; i <= n; i++)
		{
			sum += pow(q, i);
		}
		printf("%0.3f\n", sum);
	}
	return 0;
}