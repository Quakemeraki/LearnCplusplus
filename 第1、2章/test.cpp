#define _CRT_SECURE_NO_WARNINGS 1
/*
using����ָ��ó����ܹ��������ƿռ�std�ķ����У�
1.��using namespace std;���ں�������֮ǰ
2.��using namespace std;�����ض�����������
3.���ض��ĺ�����ʹ������using std::cout;
4.����Ҫʹ�����ƿռ�std�е�Ԫ��ʱ��ʹ��ǰ׺std::


*/


#include <iostream>
#include <cmath>//Ϊsqrt�����ṩ����ԭ��

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

//����
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


//�����з���ֵ����  ��Ӣʯ����ɰ�
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



//�����޷���ֵ����
void simon(int n);//����ԭ�͵�����

int main5()
//�û��ṩ�ն˵���main����
{
	using namespace std;

	simon(3);//�����ĵ���

	cout << "Pick an integer:";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;

	return 0;
	//���ظ����õĲ���ϵͳ������0����ʾ����������ȷ����0ֵ���ʾ����
}

void simon(int n)//�����Ķ���
{
	using namespace std;

	cout << "Simon says touch your toes " << n << " times." << endl;
}



//ʹ���з���ֵ�ĺ���
int main4()
{
	using namespace std;

	double area;

	cout << "Enter the floor area, in square feet, of your home:";
	cin >> area;

	double size;
	size = sqrt(area);
	//����������֪�������Ĳ������ͺͷ���ֵ����,sqrt����������������cmath��ͷ�ļ���

	cout << "That's the equivalent of a square " << size <<" feet to the side."<< endl;

	return 0;
}



//���������
int main3()
{
	using namespace std;

	int carrorts;

	cout << "How many carrorts do you have?" << endl;
	cin >> carrorts;
	//�������������Ϣͨ�� >> ����carrorts����
	cout << "Now you have " << carrorts << endl;

	return 0;
}



//��������ͱ�������
int main2()
{
	using namespace std;

	int carrorts;//��������

	carrorts = 25;//��ֵ���
	cout << "I have " ;
	cout << "carrorts" << endl;
	//������д��""���������ʾ�ַ�����������ʾ����
	cout << carrorts << endl;
	//����������������ֱ�ӱ�ʾ��������ӡ���Ǳ����洢��ֵ�����ַ�������ʽ��ӡ������

	carrorts = carrorts - 1;
	cout << carrorts << endl;

	return 0;
}



//��ӡ�ͻ���
int main1()
{
	using namespace std;

	cout << "hello,world!"<<endl;
	cout << "Hello,world!<<endl";
	//<<endl����д�ڡ������棬д������ͱ��������ַ�����һ����
	cout << "hello,world!\n";

	return 0;
}