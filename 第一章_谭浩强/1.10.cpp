#define _CRT_SECURE_NO_WARNINGS 1

//无法实现两个变量的值转换

#include<iostream>

using namespace std;

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int i = 3, j = 5;
	swap(i, j);
	cout << i << "," << j << endl;
	system("pause");
	return 0;
}