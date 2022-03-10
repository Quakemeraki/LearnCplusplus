#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int main()
{
	float celsius;

	cout << "Enter a Celsius value:";
	cin >> celsius;

	return 0;
}

int fahrenheit(int celsius)
{
	return celsius * 1.8 + 32.0;
}