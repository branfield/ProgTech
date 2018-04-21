#include<iostream>
using namespace std;

int sum = 0, rub = 0, kop = 0;

class Money
{
public:
	int rubLastNum = 0, kopLastNum = 0;
	void computation()
	{
		rub = sum / 100;
		kop = sum % 100;
		rubLastNum = rub % 10;
		kopLastNum = kop % 10;
	}

	void rubles()
	{
		if (rubLastNum == 1) cout << "рубль" << endl;
		if ((rubLastNum > 1) && (rubLastNum < 5)) cout << "рубля" << endl;
		if ((rubLastNum >= 5) && (rubLastNum == 0)) cout << "рублей" << endl;
	}

	void kopeck()
	{
		if (kopLastNum == 1) cout << "копейка" << endl;
		if ((kopLastNum > 1) && (kopLastNum < 5)) cout << "копейки" << endl;
		if ((kopLastNum >= 5) && (kopLastNum == 0)) cout << "копеек" << endl;
	}
};

int main()
{
	setlocale(0, "");
	Money program;
	cout << "Введите сумму в копейках:" << endl;
	cin >> sum;
	program.computation;

	cout << "Итого: ";

	if (sum == 0) cout << "Ничего не куплено!" << endl;
	else if (sum > 100)
	{
		if (kop == 0)
		{
			program.rubles();
		}
		else
		{
			program.rubles();
			program.kopeck();
		}
	}
	else if (sum < 100)
	{
		program.rubles();
	}
	system("pause");
	return 0;
}
