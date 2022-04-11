#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double x;
	
	while (cin >> x)
	{ 
		double sum = 1;
		double a = x;
		for (int i = 1; abs(a) > 1e-6; a *= (-1)*x / ++i)
		{
			sum += a;
		}
		cout << fixed << "x=" << x << ",sum=" << sum << endl;
	}
	return 0;
}