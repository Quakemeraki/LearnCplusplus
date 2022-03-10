#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

void time(int hours, int minutes);

int main()
{
	int hours, minutes;

	cout << "Enter the number of hours:";
	cin >> hours;
	cout << "Enter the number of minutes:";
	cin >> minutes;

	time(hours, minutes);

	return 0;
}

void time(int hours, int minutes)
{
	cout << "Time: " << hours << ":" << minutes << endl;
}