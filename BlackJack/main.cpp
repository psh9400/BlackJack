#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "main.h"
using namespace std;

int main()
{
	int set_owner_money;
	int bet_rate;
	int card_value;
	int card_count;
	int user_card_point;
	int dealer_card_point;


	char ace_select;
	char yes_or_no;

	while (TRUE)
	{
		user_card_point = dealer_card_point = card_count = RESET;
		//BET RULE
		BET_RULE(set_owner_money, bet_rate);

		//USER 
		while (TRUE)
		{
			card_value = rand() % 13 + 1; //0�� �ȳ��ͼ�
			if (card_value == 10 || card_value == 12 || card_value == 13)//JQK�� 10
				card_value = 10;
			if (card_value == 11 || card_value == 1)//ACE 1�� 11����
			{
				cout << "ACE�� �����̽��ϴ�. 1�� a , 11�� A�� �Է��ϼ��� : ";
				do {
					cin >> &ace_select;
					if (ace_select == 'a') card_value = 1;
					else if (ace_select == 'A') card_value = 11;
					else cout << "'a'�� 'A'�� �Է����ּ���." << endl;
				} while (!(ace_select == 'a' || ace_select == 'A'));
			}
			user_card_point += card_value;
			card_count++;
			if (card_count > 1)
			{
				cout << card_count << "��° ī�� , ���� : " << user_card_point << endl;
				do {
					cout << "ī�带 �� �����ðڽ��ϱ� ? (Y/N) ";
					cin >> &yes_or_no;
				} while (!(yes_or_no == 'y' || yes_or_no == 'Y' || yes_or_no == 'n' || yes_or_no == 'N'));

				if (yes_or_no == 'n' || yes_or_no == 'N')break;
			}
		}

	}
}
