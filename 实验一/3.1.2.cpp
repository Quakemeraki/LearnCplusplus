#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "��������εĸ�(1~50)��";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << string(20, '@') << endl;
	}

	return 0;
}


