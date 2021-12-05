//Написать программу, которая переводит доллары в гривны. Курс доллара задать в программе как константу.

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	const double dollarRate{ 27.28 };
	double dollar{ 0 };
	double hryvnia{ 0 };
	cout << "Введите доллары: " << endl;
	cin >> dollar;
	cout << endl;
	cout << dollar << " $ по курсу " << dollarRate << " = " << dollar * dollarRate << " грн." << endl;

	return 0;
}