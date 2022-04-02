#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//引用做函数的参数

//引用函数

//1.值传递
void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "swap1 a=" << a << endl;
	cout << "swap1 b=" << b << endl;
}
//2.地址传递
void swap2(int* a, int* b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
//3.引用传递
void swap3(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}


int main()
{
	int a = 10, b = 20;
	//swap1(a, b);//值传递，形参不会修饰形参
	//swap2(&a, &b);///地址传递，形参会修饰形参
	swap3(a, b);//引用传递，形参也会修饰形参
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


	system("pause");
	return 0;
}