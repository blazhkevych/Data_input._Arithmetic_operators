//�������� ���������, ������� ������� ������� P �� ����� S.

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������� ������� �: " << endl;
	double p;
	cin >> p;

	cout << "������� ����� S: " << endl;
	double s;
	cin >> s;

	cout << "������� P �� ����� S = " << (s / 100) * p << endl;

	return 0;
}