//�������� ���������, ������� ���������� ������������ ������ ��� ������ �������� � ������� ��� � � ����� ���������� ������� ������������.

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int year_of_birth{ 0 };
	int this_year{ 0 };

	cout << "������� ��� ������ ��������:" << endl;
	cin >> year_of_birth;

	cout << "������� ������� ���:" << endl;
	cin >> this_year;

	cout << "�������: " << this_year - year_of_birth;

	return 0;
}