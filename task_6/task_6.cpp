/*�������� ���������, ������� ���������� ������������ ������ �����
��������� ������ � �������, � ����� ������� �������, �������
����������� ����. ���������� ����� �����, ������������� ������
��������� ������ �����.*/

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������� ����� ��������� ������ � �������: " << endl;
	double monetary_contribution{ 0.0 };
	cin >> monetary_contribution;

	cout << "������� ������� �������, ������� ����������� ����" << endl;
	double percentage_per_annum{ 0.0 };
	cin >> percentage_per_annum;

	cout << "����� �����, ������������� ������ ��������� ������ �����: " << (monetary_contribution / 100) * (percentage_per_annum / 12) << " ���." << endl;

	return 0;
}