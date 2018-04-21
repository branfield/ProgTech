#include<iostream>
#include <windows.h>
using namespace std;

int sum = 0, rub = 0, kop = 0, rubLastNum = 0, kopLastNum = 0;

void computation()
{
		rub = sum / 100;
		kop = sum % 100;
		rubLastNum = rub % 10;
		kopLastNum = kop % 10;
}

void rubles()
{
		if (rubLastNum == 1) cout << rub << " рубль" << endl;
		if ((rubLastNum > 1) && (rubLastNum <=4)) cout << rub << " рубля" << endl;
		if ((rubLastNum >= 5) && (rubLastNum == 0)) cout << rub << " рублей" << endl;
}

void kopeck()
{
		if (kopLastNum == 1) cout << kop << " копейка" << endl;
		if ((kopLastNum > 1) && (kopLastNum <=4)) cout << kop << " копейки" << endl;
		if ((kopLastNum >= 5) && (kopLastNum == 0)) cout << kop << " копеек" << endl;
}

int main()
{
	setlocale(0, "");
	cout << "Введите сумму в копейках:" << endl;
	cin >> sum;
	computation();

	cout << "Итого: ";

	if (sum == 0) cout << "Ничего не куплено!" << endl;
	else if (sum > 100)
	{
		if (kop == 0)
		{
			rub = sum;
			rubles();
		}
		else
		{
			if (((rub % 100) > 10) && ((rub % 100) < 20))
			{
				cout << rub << " рублей" << endl;
			}
			if (((kop % 100) > 10) && ((kop % 100) < 20))
			{
				cout << kop << " копеек" << endl;
			}
			else if (((rub % 100) < 10) && ((rub % 100) > 20) && (((kop % 100) < 10) && ((kop % 100) > 20)))
			{
				rubles();
				kopeck();
			}
		}
	}
	else if (sum <= 100)
	{
		sum *= 100;
		computation();
		rubles();
	}
	system("pause");
	return 0;
