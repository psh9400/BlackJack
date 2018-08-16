#include <iostream>
#include <stdlib.h>
#include "main.h"
using namespace std;

int main()
{
	
	int set_owner_money;
	int bet_rate;
	int dealer_card_point;

	GET_CARD CARD;

	while (TRUE)
	{
		dealer_card_point = RESET;
		BET_RULE(set_owner_money, bet_rate);
		CARD.USER_GET_CARD();
		CARD.DEALER_GET_CARD();

	}
}
