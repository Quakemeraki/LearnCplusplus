#define _CRT_SECURE_NO_WARNINGS 1

/*
�������C++����
*/

#include<iostream>

using namespace std;

class Student
{
private:
	int num;
	int score;

public:
	void setdata()
	{
		cin >> num;
		cin >> score;
	}

	void display()
	{
		cout << "num=" << num << endl;
		cout << "score=" << score << endl;
	}
};

Student stud1, stud2;

int main()
{
	stud1.setdata();
	stud2.setdata();
	stud1.display();
	stud2.display();

	system("pause");
	return 0;
}