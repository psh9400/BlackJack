#include "main.h"

int SET_RULE ::GET_MONEY()
{
	GET_CARD GET_CARD;

	set_owner_money -= bet_rate;

	if (GET_CARD.user_card_point > GET_CARD.dealer_card_point && GET_CARD.user_card_point!=21)
	{
		set_owner_money += (bet_rate) * 2;
	}
	else if (GET_CARD.user_card_point > GET_CARD.dealer_card_point && GET_CARD.user_card_point == 21)
	{
		set_owner_money += (bet_rate) * 3;
	}
	else if (GET_CARD.dealer_card_point > GET_CARD.user_card_point && GET_CARD.dealer_card_point != 21)
	{
	}
	else if (GET_CARD.dealer_card_point > GET_CARD.user_card_point && GET_CARD.dealer_card_point == 21)
	{
		set_owner_money -= bet_rate;
	}
	cout << "현재 금액 : " << set_owner_money << " $ 입니다." << endl;
	
	if (set_owner_money < 0)
	{
		return 4;
	}

	return 0;
}