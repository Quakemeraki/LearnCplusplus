#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cstring>

using namespace std;

const int size = 100;
int p[size];
int m[size][size], s[size][size];
int n;

void matrixchain()
{
	int i, r, j, k;
	memset(m, 0, sizeof(m));
	memset(s, 0, sizeof(s));//初始化数组
	for (r = 2; r <= n; r++)//矩阵连乘的规模为r 
	{
		for (i = 1; i <= n - r + 1; i++)
		{
			j = i + r - 1;
			m[i][j] = m[i + 1][j] + p[i - 1] * p[i] * p[j];//对m[][]开始赋值
			s[i][j] = i;//s[][]存储各子问题的决策点
			for (k = i + 1; k<j; k++)//寻找最优值
			{
				int t = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
				if (t < m[i][j])
				{
					m[i][j] = t;
					s[i][j] = k;
				}
			}
		}
	}
}

void print(int i, int j)
{
	if (i == j)
	{
		cout << "A[" << i << "]";
		return;
	}
	cout << "(";
	print(i, s[i][j]);
	print(s[i][j] + 1, j);//递归1到s[1][j]
	cout << ")";
}

int main()
{
	cout << "请输入矩阵的个数n : " << endl;
	cin >> n;
	int i, j;
	cout << "请依次输入每个矩阵的行数和最后一个矩阵的列数：" << endl;
	for (i = 0; i <= n; i++)
		cin >> p[i];
	matrixchain();
	print(1, n);
	cout << endl;
	cout << "最小计算量的值为：" << m[1][n] << endl;

	system("pause");
	return 0;
}


//void materixchain(int *p,int n,int **m,int **s)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		m[i][i] = 0;
//		for (int r = 2; r <= n ; r++)
//		{
//			int j = i + r - 1;
//			m[i][j] = m[i + 1][j] + p[i - 1] * p[i] * p[j];
//			s[i][j] = 1;
//			for (int k = i+1; k < j; k++)
//			{
//				int t = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
//				if (t<m[i][j])
//				{
//					m[i][j] = t;
//					s[i][j] = k;
//				}
//			}
//		}
//	}
//}
//
//void traceback(int i, int j, int **s)
//{
//	if (i==j)
//	{
//		return;
//	}
//	traceback(i, s[i][j], s);
//	traceback(s[i][j] + 1, j, s);
//	cout << i << "," << s[i][j];
//	cout << "and a" << (s[i][j] + 1) << "j" << endl;
//}

