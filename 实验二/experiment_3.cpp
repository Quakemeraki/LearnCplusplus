#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
	char  a;
	int m;
	cout << "ÇëÊäÈë×Ö·ûºÍ¸ß£º";
	while (cin>>a>>m)
	{
		for (int i = 1; i <= m; i++)
		{
			for (int j = 1; j <= m-i; j++)
			{
				cout << " ";
			}
			for (int k = 1; k <= i; k++)
			{
				cout << a;
			}
			cout << " ";
			for (int k = 1; k <= i; k++)
			{
				cout << a;
			}
			cout << endl;
		}
	}
	return 0;
}