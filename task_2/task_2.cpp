//�������� ���������, ������� ��������� ������� � ������. ���� ������� ������ � ��������� ��� ���������.

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	const double dollarRate{ 27.28 };
	double dollar{ 0 };
	double hryvnia{ 0 };
	cout << "������� �������: " << endl;
	cin >> dollar;
	cout << endl;
	cout << dollar << " $ �� ����� " << dollarRate << " = " << dollar * dollarRate << " ���." << endl;

	return 0;
}