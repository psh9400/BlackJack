#include "main.h"

void GET_CARD::DEALER_GET_CARD()
{
	while (TRUE)
	{
		dealer_card_value = rand() % 13 + 1; //0�� �ȳ��ͼ�
		if (dealer_card_value == 10 || dealer_card_value == 12 || dealer_card_value == 13)//JQK�� 10
			dealer_card_value = 10;
		if (dealer_card_value == 1)dealer_card_value = 11;

		dealer_card_point += dealer_card_value;
		dealer_card_count++;
		if (dealer_card_count>1)
		{
			if (dealer_card_point > 16)break;
		}
		else cout << " ������ ������ ī��� """ << dealer_card_point << """ �Դϴ�." << endl;
		
	}
}