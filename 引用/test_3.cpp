#define _CRT_SECURE_NO_WARNINGS 1

//引用做函数返回值
//1.不要返回局部变量的引用
//2.函数调用可以作为左值
#include<iostream>
using namespace std;

//1.不要返回局部变量的引用
int&  test1()
{
	int a = 10;//局部变量，存在栈中
	return a;
}

//2.函数调用可以作为左值
int&  test2()
{
	static int a = 10;//全局变量，存在全局区，全局区上的数据在程序结束后系统释放
	return a;
}

int main()
{
	//int& ref = test1();
	//cout << "ref=" << ref << endl;//第一次结果正确，是因为编译器做了保留
	//cout << "ref=" << ref << endl;//第二次结果错误，a的内存已经释放

	int& ref2 = test2();
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	test2() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;

	system("pause");
	return 0;
}