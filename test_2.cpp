#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<iomanip>//������á��������

using namespace std;

int main1()
{
	cout << "My name is Jone\n";
	cout << "the ID is ";
	cout << 2;
	cout << endl;

	cout << "My name is Jone\n"
		<< "the ID is "
		<< 2
		<< endl;

	system("pause");
	return 0;
}




/*
���Ƹ�����ֵ��ʾ 
  setprecision(n)��ʾ�����������ָ���
     ��fixed���ã����Կ���С�����ұߵ����ָ���
	 ��scientific���ã����Կ���ָ����ʾ����С��λ��
*/
int main2()
{
	double amount = 22.0 / 7;
	cout << amount << endl;


	//����ͨ��ʾ������У�setprecision(n)��ʾ��Чλ��
	cout << setprecision(0) << amount << endl//��С��Чλ��Ϊ1������˵�ᵱ��1�������˱���������Ĭ��ֵ����

		//��ʱ��ʾ��Чλ��
		<< setprecision(1) << amount << endl
		<< setprecision(2) << amount << endl
		<< setprecision(3) << amount << endl
		<< setprecision(4) << amount << endl
		<< setprecision(5) << amount << endl;

	//��ȷ����ʾ������У�setprecision(n)��ʾС��λ��
	cout << fixed << setprecision(8) << amount << endl;

	//��ָ����ʽ����У�setprecision(n)��ʾС��λ��
	cout << scientific << amount << endl;

	system("pause");
	return 0;
}



/*
  ����ֵ��������
*/
int main3()
{
	float amount = 3.14159;
	cout << setw(4) << amount << endl;

	//setw(n)����Ӱ����һ����ֵ���
	cout << setw(8)
		<< 10
		<< 20
		<< endl;

	system("pause");
	return 0;
}



/*
  ����˽�������ʮ��������
*/
int main4()
{
	int num = 1001;
	cout << "Decimal:" << dec << num << endl//ʮ����
		<< "Hexadecimal:" << hex << num << endl//ʮ������
		<< "Octal:" << oct << num << endl;//�˽���

	cout << "Hexadecimal:" << hex << uppercase << num << endl;//��д���ʮ������

	system("pause");
	return 0;
}



/*
  ��������ַ�
*/
int main5()
{
	cout << setfill('*')
		<< setw(2) << 21 << endl
		<< setw(3) << 21 << endl
		<< setw(4) << 21 << endl;

	cout << setw(4) << 21 << endl;

	//�ָ�Ĭ������
	cout << setfill(' ');
	cout << setw(4) << 21 << endl;

	system("pause");
	return 0;
}



/*
  ���Ҷ������
*/
int main6()
{
	cout << right
		<< setw(5) << 1
		<< setw(5) << 2
		<< setw(5) << 3 << endl;

	cout << left
		<< setw(5) << 1
		<< setw(5) << 2
		<< setw(5) << 3 << endl;

	system("pause");
	return 0;
}



/*
  ǿ����ʾС����ͷ���
*/
int main()
{
	//showpoint
	cout << 10.0 / 5 << endl;
	cout << showpoint << 10.0 / 5 << endl;

	//showpos
	cout << 10 << " " << -20 << endl;
	cout << showpos << 10 << " " << -20 << endl;

	system("pause");
	return 0;
}
