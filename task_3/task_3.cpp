//Написать программу, которая предлагает пользователю ввести год своего рождения и текущий год и в ответ показывает возраст пользователя.

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int year_of_birth{ 0 };
	int this_year{ 0 };

	cout << "Введите год своего рождения:" << endl;
	cin >> year_of_birth;

	cout << "Введите текущий год:" << endl;
	cin >> this_year;

	cout << "Возраст: " << this_year - year_of_birth;

	return 0;
}