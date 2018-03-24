#include<iostream>
#include <string>  
using namespace std;
int main()
{
	setlocale(0, "");
	int s = 0;
	cout << "Введите сумму в копейках:" << endl;
	cin >> s;

	cout << "Итого: ";
	int r = 0, k = 0, w = 0, h = 0;
	r = s / 100;
	k = s % 100;
	w = r / 10;
	h = k / 10; 

	//ОКОНЧАНИЯ
	string oneR("ль");
	string someR("ля");
	string moreR("лей");
	string oneK("йка");
	string someK("йки");
	string moreK("еек");

	if (s == 0) cout << "Ничего не куплено!" << endl;
	else if (s > 100)
	{
		if (k == 0) 
		{
			cout << r << " руб";
			if (w == 1) cout << oneR << endl;
			if ((w > 1) && (w < 5)) cout << someR  <<endl;
			if (w >= 5) cout << moreR << endl;
		}
		else 
		{
			cout << r << " руб";
			if (w == 1) cout << oneR << endl;
			if ((w > 1) && (w < 5)) cout << someR << endl;
			if (w >= 5) cout << moreR << endl;
			cout << k << " коп";
			if (h == 1) cout << oneK << endl;
			if ((h > 1) && (w < 5)) cout << someK << endl;
			if (h >= 5) cout << moreK << endl;
		}
	}
	else if (s < 100)
	{
		cout << r << " руб";
		if (w == 1) cout << oneR << endl;
		if ((w > 1) && (w < 5)) cout << someR << endl;
		if (w >= 5) cout << moreR << endl;
	}
		system ("pause");
		return 0;
}