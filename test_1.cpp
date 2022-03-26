#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cmath>
using namespace std;

double max(double x, double y);




int main1()
{
	cout << "hello world"<<endl;

	return 0;
}




int main2()
{
	int a, b, result;
	cout << "please input two number:\n";
	cin >> a >> b;
	result = 3 * a - 2 * b + 1;
	cout << "result is " << result << endl;
	system("pause");
	return 0;
}




int main()
{
	double a, b, c;
	cout << "input two numbers:\n";
	cin >> a >> b;
	c = max(a, b);
	cout << "the squart of maxmun = " << sqrt(c);

	system("pause");
	return 0;
}

double max(double x, double y)
{
	if (x > y)
		return x;
	else
		return y;
}







