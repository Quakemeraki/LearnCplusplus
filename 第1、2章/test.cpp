#define _CRT_SECURE_NO_WARNINGS 1
/*
using编译指令，让程序能够访问名称空间std的方法有：
1.将using namespace std;放在函数定义之前
2.将using namespace std;放在特定函数定义中
3.将特定的函数中使用类似using std::cout;
4.在需要使用名称空间std中的元素时，使用前缀std::


*/


#include <iostream>
#include <cmath>//为sqrt函数提供函数原型

using namespace std;


int& Add(int x, int y)
{
	int ans = x + y;
	return ans;
}

int main()
{
	int a = Add(1, 2);

	Add(3, 4);
	cout << a << endl;

	return 0;
}

//引用
int main7()
{
	int a = 1;
	int& b = a;
	int c = 2;

	b = c;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;
}


//定义有返回值函数  将英石换算成磅
int stonetolb(int sts);

int main6()
{
//	using namespace std;
	/*using std::cout;
	using std::cin;
	using std::endl;*/

	int stone;
	cout << "Enter the weight in stone:";
	cin >> stone;

	int pounds = stonetolb(stone);
	cout << stone << " stone = " << pounds << " pounds." << endl;

	return 0;
}

//1 stone = 14 lbs
int stonetolb(int sts)
{
	//int pounds = 14 * sts;

	//return pounds;

	return 14 * sts;
}



//定义无返回值函数
void simon(int n);//函数原型的声明

int main5()
//用户提供终端调用main函数
{
	using namespace std;

	simon(3);//函数的调用

	cout << "Pick an integer:";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;

	return 0;
	//返回给调用的操作系统，返回0，表示程序运行正确，非0值则表示错误
}

void simon(int n)//函数的定义
{
	using namespace std;

	cout << "Simon says touch your toes " << n << " times." << endl;
}



//使用有返回值的函数
int main4()
{
	using namespace std;

	double area;

	cout << "Enter the floor area, in square feet, of your home:";
	cin >> area;

	double size;
	size = sqrt(area);
	//编译器必须知道函数的参数类型和返回值类型,sqrt函数的声明包含在cmath的头文件中

	cout << "That's the equivalent of a square " << size <<" feet to the side."<< endl;

	return 0;
}



//输出输入流
int main3()
{
	using namespace std;

	int carrorts;

	cout << "How many carrorts do you have?" << endl;
	cin >> carrorts;
	//将键盘输入的信息通过 >> 流入carrorts方向
	cout << "Now you have " << carrorts << endl;

	return 0;
}



//定义变量和变量运算
int main2()
{
	using namespace std;

	int carrorts;//声明变量

	carrorts = 25;//赋值语句
	cout << "I have " ;
	cout << "carrorts" << endl;
	//变量名写在""括号里面表示字符串，而不表示变量
	cout << carrorts << endl;
	//不用括号括起来则直接表示变量，打印的是变量存储的值（以字符串的形式打印出来）

	carrorts = carrorts - 1;
	cout << carrorts << endl;

	return 0;
}



//打印和换行
int main1()
{
	using namespace std;

	cout << "hello,world!"<<endl;
	cout << "Hello,world!<<endl";
	//<<endl必须写在“”外面，写在里面就被看成了字符串的一部分
	cout << "hello,world!\n";

	return 0;
}