//Пользователь вводит число. Программа вычисляет 3-ю степень этого числа.

#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

	cout << "Введите число, для возведения его в 3-ю степень: " << endl;
	double number{ 0 };
	cin >> number;
	cout << "3-я степень введенного Вами числа (" << number << ") числа равна " << number * number * number << "." << endl;

	return 0;
}