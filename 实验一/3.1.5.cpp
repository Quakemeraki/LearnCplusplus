#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
	cout << "请输入正方形的边长：";
	int n;
	while (cin >> n)
	{
		cout << n*n << endl;
	}

	return 0;
}