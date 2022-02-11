#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

double units(double light);

int main()
{
	double light;

	cout << "Enter the number of light years:";
	cin >> light;

	double astronomicalunits;
	astronomicalunits = units(light);
	cout << light << " light years = " << astronomicalunits << " astronomical units." << endl;

	return 0;
}

double units(double light)
{
	return light * 63240;
}