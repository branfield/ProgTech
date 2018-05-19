#include<iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int sum = 0;
	cout << "Введите сумму в копейках: " << endl;
	cin >> sum;
	cout << "Итого: ";
	if (sum == 0)
		cout << "Ничего не куплено!" << endl;
	else
	{
		int kop=0;
		int rub=0;
		rub = sum / 100;
		kop = sum % 100;
		if (rub != 0)
		{
			if (rub == 1 || rub % 10 == 1)
				cout << rub << " рубль ";
			else if (rub > 4 || (rub % 10 == 0) || ((rub%100>10)&&(rub%100<20)))
				cout << rub << " рублей ";
			else if (rub <= 4 || rub%10==2 ||  rub % 10 == 3 || rub % 10 == 4)
				cout << rub << " рубля ";
		}
		if (kop != 0)
		{
			if (kop == 1 || kop % 10 == 1)
				cout << kop << " копейка ";
			else if (kop > 4 || (kop % 10 == 0) || ((kop % 100>10) && (kop % 100<20)))
				cout << kop << " копеек ";
			else if ( kop <= 4 || kop % 10 == 2 || kop % 10 == 3 || kop % 10 == 4)
				cout << kop << " копейки ";
		}

	}
	cout << endl;
	system("pause");
	return 0;
}
