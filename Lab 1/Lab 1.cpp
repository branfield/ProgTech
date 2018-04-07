#include<iostream>
#include <string>  
using namespace std;
int main()
{
	setlocale(0, "");
	int sum = 0;
	cout << "Введите сумму в копейках:" << endl;
	cin >> sum;

	cout << "Итого: ";
	int rub = 0, kop = 0, rubLastNum = 0, kopLastNum = 0;
	rub = sum / 100;
	kop = sum % 100;
	rubLastNum = rub / 10;
	kopLastNum = kop / 10;

	//ОКОНЧАНИЯ
	string oneRub("ль");
	string fewRub("ля");
	string lotRub("лей");
	string oneKop("ейка");
	string fewKop("ейки");
	string lotKop("еек");

	if (sum == 0) cout << "Ничего не куплено!" << endl;
	else if (sum > 100)
	{
		if (kop == 0)
		{
			cout << rub << " руб";
			if (rubLastNum == 1) cout << oneRub << endl;
			if ((rubLastNum > 1) && (rubLastNum < 5)) cout << fewRub << endl;
			if ((rubLastNum >= 5) && (rubLastNum == 0)) cout << lotRub << endl;
		}
		else
		{
			cout << rub << " руб";
			if (rubLastNum == 1) cout << oneRub << endl;
			if ((rubLastNum > 1) && (rubLastNum < 5)) cout << fewRub << endl;
			if ((rubLastNum >= 5) && (rubLastNum == 0)) cout << lotRub << endl;
			cout << kop << " коп";
			if (kopLastNum == 1) cout << oneKop << endl;
			if ((kopLastNum > 1) && (kopLastNum < 5)) cout << fewKop << endl;
			if ((kopLastNum >= 5) && (kopLastNum == 0)) cout << lotKop << endl;
		}
	}
	else if (sum < 100)
	{
		cout << rub << " руб";
		if (rubLastNum == 1) cout << oneRub << endl;
		if ((rubLastNum > 1) && (rubLastNum < 5)) cout << fewRub << endl;
		if (rubLastNum >= 5) cout << lotRub << endl;
	}
	system("pause");
	return 0;
}
