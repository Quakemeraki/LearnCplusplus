#define _CRT_SECURE_NO_WARNINGS 1

//���ٿռ��Դ��һ���ṹ�����

#include<iostream>
#include<string>
using namespace std;

struct Student
{
	char name[10];
	int num;
	char sex;
};

int main()
{
	Student* p;
	p = new Student;
	strcpy(p->name ,"Wang Yun");
	p->num = 10123;
	p->sex = 'm';
	cout << p->name << " " << p->num << " " << p->sex << endl;
	system("pause");
	return 0;
}