#define _CRT_SECURE_NO_WARNINGS 1

//ʹ��ָ��������βΣ�ʵ�����������Ĳ���ת��

#include<iostream>

using namespace std;

void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	int i = 3, j = 5;
	swap(&i, &j);
	cout << i << "," << j << endl;

	system("pause");
	return 0;
}