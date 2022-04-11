#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<set>
using namespace std;

bool isPrime(int n)
{
	for (int i = 2; i <= 31; i++)
	{
		if (n%i == 0)
		{
			return false;
		}
		return true;
	}
}

int main()
{
	set<int>s;
	for (int i = 1; i < 10; i+=2)
	{
		for (int j = 0, a; j < 10; j++)
		{
			if (isPrime(a=i*101+10*j))
			{
				s.insert(a);
			}
		}
	}
	for (int n = 0; cin>>n; )
	{
		cout << (s.find(n) == s.end() ? "No\n" : "Yes\n");
	}
	return 0;
}
