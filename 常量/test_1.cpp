#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;
//常量的定义方式
//1.#define 宏常量
//2.const修饰的变量

//1.#define 宏常量
#define Day 7


int main()
{
	//Day = 14;//错误，Day是常量，一旦修改就会报错
	cout << "一周总共有：" << Day << "天" << endl;;

	//2.const修饰的变量
	const int month = 12;
	//month = 24;//const修饰的变量也是常量，错误
	cout << "一年总共有：" << month << "个月" << endl;
	system("pause");
	return 0;
}