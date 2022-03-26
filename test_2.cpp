#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<iomanip>//宽度设置、填充设置

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
控制浮点数值显示 
  setprecision(n)显示浮点数的数字个数
     与fixed连用，可以控制小数点右边的数字个数
	 与scientific合用，可以控制指数表示法的小数位数
*/
int main2()
{
	double amount = 22.0 / 7;
	cout << amount << endl;


	//在普通表示的输出中，setprecision(n)表示有效位数
	cout << setprecision(0) << amount << endl//最小有效位数为1，书上说会当作1来看，此编译器当作默认值来看

		//此时表示有效位数
		<< setprecision(1) << amount << endl
		<< setprecision(2) << amount << endl
		<< setprecision(3) << amount << endl
		<< setprecision(4) << amount << endl
		<< setprecision(5) << amount << endl;

	//在确定表示的输出中，setprecision(n)表示小数位数
	cout << fixed << setprecision(8) << amount << endl;

	//在指数形式输出中，setprecision(n)表示小数位数
	cout << scientific << amount << endl;

	system("pause");
	return 0;
}



/*
  设置值的输出宽度
*/
int main3()
{
	float amount = 3.14159;
	cout << setw(4) << amount << endl;

	//setw(n)仅仅影响下一个数值输出
	cout << setw(8)
		<< 10
		<< 20
		<< endl;

	system("pause");
	return 0;
}



/*
  输出八进制数和十六进制数
*/
int main4()
{
	int num = 1001;
	cout << "Decimal:" << dec << num << endl//十进制
		<< "Hexadecimal:" << hex << num << endl//十六进制
		<< "Octal:" << oct << num << endl;//八进制

	cout << "Hexadecimal:" << hex << uppercase << num << endl;//大写输出十六进制

	system("pause");
	return 0;
}



/*
  设置填充字符
*/
int main5()
{
	cout << setfill('*')
		<< setw(2) << 21 << endl
		<< setw(3) << 21 << endl
		<< setw(4) << 21 << endl;

	cout << setw(4) << 21 << endl;

	//恢复默认设置
	cout << setfill(' ');
	cout << setw(4) << 21 << endl;

	system("pause");
	return 0;
}



/*
  左右对齐输出
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
  强调显示小数点和符号
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
