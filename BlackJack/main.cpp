#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include "main.h"

#define TRUE 1
using namespace std;

int main()
{	
	SET_RULE SET;
	while (TRUE)
	{
		srand(time(NULL));
		system("cls");
		SET.RESET_CARD();
		SET.BET_RULE();
		SET.DEALER_GET_CARD();
		if (SET.USER_GET_CARD() == 2) SET.CARD_OPEN();
		SET.GET_MONEY();
		Sleep(3300);
	}
}
