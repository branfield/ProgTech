#include<iostream>
#include<cstdlib>
#include <time.h>
using namespace std;
int main ()
{
	setlocale(0, "");
	int a;
	srand(time(0));
	a = rand()% 1000 + 1;
	cout << "(�������� �����: " << a << ")" << endl;
	int b;
	for (int i = 1; i < 11; i++)
	{
		cout << "������� �" << i << endl;
		cout << "������� �����: ";
		cin >> b;
		if (a != b)
		{
			if (a > b) cout << "������" << endl << "___________________" << endl << endl;
			if (a < b) cout << "������" << endl << "___________________" << endl << endl;
			if (i == 10) cout << endl << "�� �� �������� �����!���������� � ������ ���" << endl << "���������� �����: " << a << endl;
		}
		else if (a == b)
		{
			cout << endl << "�� �������� �����!�����!�� �������� ����� � " << i << " - � �������" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}