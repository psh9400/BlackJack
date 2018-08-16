#include "main.h"

void GET_CARD::CARD_OPEN()
{
	if (user_card_point > 21) cout << "BURST!!" << endl;
	else
	{
		if (user_card_point > dealer_card_point)
		{
			cout << " USER WIN! " << endl;
		}
		else if (user_card_point < dealer_card_point)
		{
			cout << " Dealer WIN! " << endl;
		}
		else cout << " DRAW " << endl;
	}
	cout << " USER POINT : " << user_card_point << "      DEALER POINT : " << dealer_card_point << endl;
	
}