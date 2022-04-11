#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 0; i <= 31; i++)
		{
			cout << (n << i < 0);
		}
		cout << "  " << n << endl;
	}
	system("pause");
	return 0;
}