#define _CRT_SECURE_NO_WARNINGS 1

//���õı��ʣ�����ָ�볣��
#include<iostream>
using namespace std;

void func(int& ref)
{
	ref = 100;
}

int main()
{
	int a = 10;

	int& ref = a;//�Զ�ת���� int* const ref = &a;ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò����Ը���
	ref = 20;//�ڲ�����ref�����ã��Զ�������ת��Ϊ��*ref=20��

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func(a);

	system("pause");
	return 0;
}