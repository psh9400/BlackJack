#include <iostream>
#include <stdlib.h>
#include "main.h"
using namespace std;

int main()
{
	
	GET_CARD CARD;
	SET_RULE SET;

	while (TRUE)
	{
		CARD.RESET_CARD();
		SET.BET_RULE();
		CARD.DEALER_GET_CARD();
		if (CARD.USER_GET_CARD() == 2) CARD.CARD_OPEN();
		
	}
}
