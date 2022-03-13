#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º";
	char a;
	cin >> a;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7-i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < 2*i-1; k++)
		{
			cout << a;
		}
		
		cout << endl;
	}

	return 0;
}