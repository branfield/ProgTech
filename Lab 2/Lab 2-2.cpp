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
	cout << "(Загаданное число: " << a << ")" << endl;
	int b;
	for (int i = 1; i < 11; i++)
	{
		cout << " Попытка №" << i << endl;
		cout << "Введите число: ";
		cin >> b;
		if (a != b)
		{
			if (a > b) cout << "Больше" << endl << "___________________" << endl << endl;
			if (a < b) cout << "Меньше" << endl << "___________________" << endl << endl;
			if (i == 10) cout << endl << "Вы не отгадали число! Попробуйте в другой раз." << endl << "Загаданное число: " << a << endl;
		}
		else if (a == b)
		{
			cout << endl << "Вы отгадали число! Браво! Вы угадали число с " << i << " - ой попытки" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}
