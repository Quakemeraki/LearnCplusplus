#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "Enter your age:";
	cin >> age;

	int month;
	month = age * 12;
	cout << "It includes " << month << " month." << endl;

	return 0;
}