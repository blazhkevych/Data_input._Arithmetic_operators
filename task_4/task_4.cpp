//Написать программу, которая находит процент P от суммы S.

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите процент Р: " << endl;
	double p;
	cin >> p;

	cout << "Введите сумму S: " << endl;
	double s;
	cin >> s;

	cout << "Процент P от суммы S = " << (s / 100) * p << endl;

	return 0;
}