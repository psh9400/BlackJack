#include "main.h"

void SET_RULE::BET_RULE()
{
	if (owner_money==0|| owner_money < 0)
	{
		do {
			cout << " --------------------------------------------" << endl;
			cout << " 1. 50000$  2. 30000$  3. 10000$" << endl;
			cout << " 초기 자금을 정해주세요 : ";
			cin >> set_owner_money;
			if (set_owner_money == 1)
				owner_money = 50000;
			else if (set_owner_money == 2)
				owner_money = 30000;
			else if (set_owner_money == 3)
				owner_money = 10000;
			if (cin.fail())
				cout << " Retry ! " << endl;
			cin.clear();
			cin.ignore(256, '\n');
		} while (!(set_owner_money == 1 || set_owner_money == 2 || set_owner_money == 3));
		do {
			cout << " 2. 5000$    2. 3000$    3. 1000$" << endl;
			cout << " 배팅 금액을 정해주세요 : ";
			cin >> set_bet_rate;
			cout << " --------------------------------------------" << endl;
			if (set_bet_rate == 1)
				bet_rate = 5000;
			else if (set_bet_rate == 2)
				bet_rate = 3000;
			else if (set_bet_rate == 3)
				bet_rate = 1000;
			if (cin.fail())
				cout << " Retry ! " << endl;
			cin.clear();
			cin.ignore(256, '\n');
		} while (!(set_bet_rate == 1 || set_bet_rate == 2 || set_bet_rate == 3));
	}
}