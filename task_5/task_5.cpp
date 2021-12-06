//Пользователь трижды вводит достоинство купюр и их количество. Программа должна посчитать общую сумму денег.

//denomination - достоинство купюры

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Ввод № 1 " << endl;
	int denomination1{ 0 };
	cout << "Введите достоинство купюры: " << endl;
	cin >> denomination1;
	cout << "Введите количество купюр: " << endl;
	int amount1{ 0 };
	cin >> amount1;

	cout << "\nВвод № 2 " << endl;
	int denomination2{ 0 };
	cout << "Введите достоинство купюры: " << endl;
	cin >> denomination2;
	cout << "Введите количество купюр: " << endl;
	int amount2{ 0 };
	cin >> amount2;

	cout << "\nВвод № 3 " << endl;
	int denomination3{ 0 };
	cout << "Введите достоинство купюры: " << endl;
	cin >> denomination3;
	cout << "Введите количество купюр: " << endl;
	int amount3{ 0 };
	cin >> amount3;

	cout << "\nОбщая сумма денег: " << (denomination1 * amount1) + (denomination2 * amount2) + (denomination3 * amount3) << endl;

	return 0;
}