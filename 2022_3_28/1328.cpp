#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

struct Xaxis
{
	double left;
	double right;
}xaxis[1000];

bool cmp(Xaxis a, Xaxis b)
{
	return a.left < b.left;
}

int main()
{
	int n, d;
	int m=0;
	int num[1000] = { 0 };
	while (cin >> n >> d)
	{
		int x, y;
		int k = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> x >> y;//接受每个岛屿的位置坐标
			xaxis[i].left= x - sqrt(d*d - y*y);
			xaxis[i].right= x + sqrt(d*d - y*y);
		}
		sort(xaxis, xaxis+ n - 1,cmp);
		for (int j=1; j < n; j++)
		{
			if (xaxis[j].left>=xaxis[k].right)
			{
				k = j;
				num[m]++;
			}
		}
		m++;
	}
	for (int m = 0; m < n; m++)
	{
		cout << "Case:" << m << ":" << num[m];
	}
	return 0;
}