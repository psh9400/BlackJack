#pragma once

#include <iostream>
#include <stdlib.h>
#include "main.h"
using namespace std;

void BET_RULE(int& set_owner_money, int& bet_rate)
{
	int money_value;
	int rate_value;
	do {
		cout << "1. 50000$  2. 30000$  3. 10000$" << endl;
		cout << "초기 자금을 정해주세요 : ";
		cin >> money_value;
		if (cin.fail())
			cout << " Retry ! " << endl;
		cin.clear();
		cin.ignore(256, '\n');
	} while (!(money_value == 1 || money_value == 2 || money_value == 3));
	do {
		cout << "2. 5000$    2. 3000$    3. 1000$" << endl;
		cout << "배팅 금액을 정해주세요 : ";
		cin >> rate_value;
		if (cin.fail())
			cout << " Retry ! " << endl;
		cin.clear();
		cin.ignore(256, '\n');
	} while (!(rate_value == 1 || rate_value == 2 || rate_value == 3));

}