//������������ ������ ������ ����������� ����� � �� ����������. ��������� ������ ��������� ����� ����� �����.

//denomination - ����������� ������

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "���� � 1 " << endl;
	int denomination1{ 0 };
	cout << "������� ����������� ������: " << endl;
	cin >> denomination1;
	cout << "������� ���������� �����: " << endl;
	int amount1{ 0 };
	cin >> amount1;

	cout << "\n���� � 2 " << endl;
	int denomination2{ 0 };
	cout << "������� ����������� ������: " << endl;
	cin >> denomination2;
	cout << "������� ���������� �����: " << endl;
	int amount2{ 0 };
	cin >> amount2;

	cout << "\n���� � 3 " << endl;
	int denomination3{ 0 };
	cout << "������� ����������� ������: " << endl;
	cin >> denomination3;
	cout << "������� ���������� �����: " << endl;
	int amount3{ 0 };
	cin >> amount3;

	cout << "\n����� ����� �����: " << (denomination1 * amount1) + (denomination2 * amount2) + (denomination3 * amount3) << endl;

	return 0;
}