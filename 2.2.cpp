#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>


using namespace std;


int main()
{
	int lengthlong;

	cout << "Enter a length:";
	cin >> lengthlong;

	int lengthcode;
	lengthcode = lengthlong * 220;
	cout << "There is " << lengthcode << " code." << endl;

	return 0;
}