//������������ ������ �����. ��������� ��������� 3-� ������� ����� �����.

#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

	cout << "������� �����, ��� ���������� ��� � 3-� �������: " << endl;
	double number{ 0 };
	cin >> number;
	cout << "3-� ������� ���������� ���� ����� (" << number << ") ����� ����� " << number * number * number << "." << endl;

	return 0;
}