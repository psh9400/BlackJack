#pragma once

class GET_CARD
{	
public:
	int user_card_value;
	int user_card_point;
	int dealer_card_value;
	int dealer_card_point;
	int user_card_count;
	int dealer_card_count;
	char ace_select;
	char yes_or_no;

public:
	int USER_GET_CARD();
	void DEALER_GET_CARD();
	void RESET_CARD();
	void CARD_OPEN();
}; 