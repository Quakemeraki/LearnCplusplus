#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin>>n)
	{
		switch ((!(n%3)<<2)+(!(n%5)<<1)+!(n%7))
		{
		case 0:cout << n << "-->None" << endl;
			break;
		case 1:cout << n << "-->7" << endl;
			break;
		case 2:cout << n << "-->5" << endl;
			break;
		case 3:cout << n << "-->5,7" << endl;
			break;		
		case 4:cout << n << "-->3" << endl;
			break;
		case 5:cout << n << "-->3,7" << endl;
			break;
		case 6:cout << n << "-->3,5" << endl;
			break;
		case 7:cout << n << "-->3,5,7" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}