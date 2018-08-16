#include "main.h"

void GET_CARD::DEALER_GET_CARD()
{
	while (TRUE)
	{
		dealer_card_value = rand() % 13 + 1;
		if (dealer_card_value == 10 || dealer_card_value == 12 || dealer_card_value == 13)
			dealer_card_value = 10;
		if (dealer_card_value == 1)dealer_card_value = 11;


		dealer_card_count++;

		if (dealer_card_count == 1)
		{
			dealer_card_point += dealer_card_value;
			cout << " 딜러가 오픈한 카드는 """ << dealer_card_point << """ 입니다." << endl;
		}
		else if (dealer_card_point <= 21 && dealer_card_point >= 17)break;
		else
		{
			temporary_dealer_point += dealer_card_value;
			if (dealer_card_point + temporary_dealer_point < 17)dealer_card_point += temporary_dealer_point;

		}

	}
}

