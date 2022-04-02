#define _CRT_SECURE_NO_WARNINGS 1

//将例1.6程序改为通过函数模板来实现

#include<iostream>

using namespace std;

template<typename T>
T max(T a, T b, T c)
{
	if (a<b)
	{
		a = b;
	}
	if (a<c)
	{
		a = c;
	}
	return a;
}

int main()
{
	int i1 = 8, i2 = 5, i3 = 6, i;
	double d1 = 56.9, d2 = 90.765, d3 = 41.1, d;
	long g1 = 67843, g2 = -456, g3 = 78123, g;
	i = max(i1, i2, i3);
	d = max(d1, d2, d3);
	g = max(g1, g2, g3);
	cout << "i_max=" << i << endl;
	cout << "d_max=" << d << endl;
	cout << "g_max=" << g << endl;

	system("pause");
	return 0;
}