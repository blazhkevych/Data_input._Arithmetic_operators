/*Ќаписать программу, котора€ предлагает пользователю ввести сумму
денежного вклада в гривнах, а также процент годовых, которые
выплачивает банк. ќпределить сумму денег, выплачиваемых банком
вкладчику каждый мес€ц.*/

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "¬ведите сумму денежного вклада в гривнах: " << endl;
	double monetary_contribution{ 0.0 };
	cin >> monetary_contribution;

	cout << "¬ведите процент годовых, которые выплачивает банк" << endl;
	double percentage_per_annum{ 0.0 };
	cin >> percentage_per_annum;

	cout << "—умма денег, выплачиваемых банком вкладчику каждый мес€ц: " << (monetary_contribution / 100) * (percentage_per_annum / 12) << " грн." << endl;

	return 0;
}