#pragma once

class SET_RULE : public GET_CARD
{
public:
	int set_owner_money;
	int set_bet_rate;
	int owner_money;
	int bet_rate;
	void BET_RULE();
	int GET_MONEY();
};

