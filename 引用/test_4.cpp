#define _CRT_SECURE_NO_WARNINGS 1

//引用的本质：就是指针常量
#include<iostream>
using namespace std;

void func(int& ref)
{
	ref = 100;
}

int main()
{
	int a = 10;

	int& ref = a;//自动转换成 int* const ref = &a;指针常量是指针指向不可改，也说明为什么引用不可以更改
	ref = 20;//内部发现ref是引用，自动帮我们转换为：*ref=20；

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func(a);

	system("pause");
	return 0;
}