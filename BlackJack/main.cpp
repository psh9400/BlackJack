#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "main.h"
using namespace std;

int main()
{
	while (TRUE)
	{
		user_card_point = dealer_card_point = card_count = RESET;
		//BET RULE
		do
		{
			cout << "1. 50000$  2. 30000$  3. 10000$" << endl;
			cout << "�ʱ� �ڱ��� �����ּ��� : ";
			cin >> set_owner_money;
			cout << "1. 500$    2. 300$    3. 100$" << endl;
			cout << "���� �ݾ��� �����ּ��� : ";
			cin >> bet_rate;
		} while (!(set_owner_money == 1 || set_owner_money == 2 || set_owner_money == 3 || bet_rate==1||
			bet_rate == 2 || bet_rate == 3));
		
		//USER 
		while (TRUE)
		{
			

			card_value = rand() % 13 + 1; //0�� �ȳ��ͼ�
			if (card_value == 10 || card_value == 12 || card_value == 13)//JQK�� 10
				card_value = 10;
			if (card_value == 11 || card_value == 1)//ACE 1�� 11����
			{
				cout << "ACE�� �����̽��ϴ�. 1�� a , 11�� A�� �Է��ϼ��� : ";
				do
				{
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

				cout << "ī�带 �� �����ðڽ��ϱ� ? (Y/N) ";
				cin >> &yes_or_no;
				if (yes_or_no == 'n' || yes_or_no == 'N')break;
			}
		}
		//USER FIN

	}
}
