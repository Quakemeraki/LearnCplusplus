#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//�����������Ĳ���

//���ú���

//1.ֵ����
void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "swap1 a=" << a << endl;
	cout << "swap1 b=" << b << endl;
}
//2.��ַ����
void swap2(int* a, int* b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
//3.���ô���
void swap3(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}


int main()
{
	int a = 10, b = 20;
	//swap1(a, b);//ֵ���ݣ��ββ��������β�
	//swap2(&a, &b);///��ַ���ݣ��βλ������β�
	swap3(a, b);//���ô��ݣ��β�Ҳ�������β�
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


	system("pause");
	return 0;
}