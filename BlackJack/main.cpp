#include <iostream>
#include <stdlib.h>
#include "main.h"

#define TRUE 1
using namespace std;

int main()
{
	GET_CARD CARD;
	SET_RULE SET;
	while (TRUE)
	{
		srand(time(NULL));
		CARD.RESET_CARD();
		SET.BET_RULE();
		CARD.DEALER_GET_CARD();
		if (CARD.USER_GET_CARD() == 2) CARD.CARD_OPEN();
		SET.GET_MONEY();
		
	}
}
