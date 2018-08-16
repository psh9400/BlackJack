#pragma once
#define RESET 0


class GET_CARD
{	
public:
	int user_card_value=RESET;
	int user_card_point= RESET;
	int dealer_card_value = RESET;
	int dealer_card_point = RESET;
	int card_count= RESET;
	char ace_select;
	char yes_or_no;

public:
	void USER_GET_CARD();
	void DEALER_GET_CARD();
}; 