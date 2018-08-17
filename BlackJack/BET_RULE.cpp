#include "main.h"

void SET_RULE::BET_RULE()
{
	do {
		cout << "1. 50000$  2. 30000$  3. 10000$" << endl;
		cout << "초기 자금을 정해주세요 : ";
		cin >> set_owner_money;
		if (cin.fail())
			cout << " Retry ! " << endl;
		cin.clear();
		cin.ignore(256, '\n');
	} while (!(set_owner_money == 1 || set_owner_money == 2 || set_owner_money == 3));
	do {
		cout << "2. 5000$    2. 3000$    3. 1000$" << endl;
		cout << "배팅 금액을 정해주세요 : ";
		cin >> bet_rate;
		if (cin.fail())
			cout << " Retry ! " << endl;
		cin.clear();
		cin.ignore(256, '\n');
	} while (!(bet_rate == 1 || bet_rate == 2 || bet_rate == 3));
}