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
			cout << "초기 자금을 정해주세요 : ";
			cin >> set_owner_money;
			cout << "1. 500$    2. 300$    3. 100$" << endl;
			cout << "배팅 금액을 정해주세요 : ";
			cin >> bet_rate;
		} while (!(set_owner_money == 1 || set_owner_money == 2 || set_owner_money == 3 || bet_rate==1||
			bet_rate == 2 || bet_rate == 3));
		
		//USER 
		while (TRUE)
		{
			

			card_value = rand() % 13 + 1; //0이 안나와서
			if (card_value == 10 || card_value == 12 || card_value == 13)//JQK는 10
				card_value = 10;
			if (card_value == 11 || card_value == 1)//ACE 1과 11고르기
			{
				cout << "ACE를 뽑으셨습니다. 1은 a , 11은 A를 입력하세요 : ";
				do
				{
					cin >> &ace_select;
					if (ace_select == 'a') card_value = 1;
					else if (ace_select == 'A') card_value = 11;
					else cout << "'a'와 'A'중 입력해주세요." << endl;
				} while (!(ace_select == 'a' || ace_select == 'A'));

			}
			user_card_point += card_value;
			card_count++;

			if (card_count > 1)
			{
				cout << card_count << "번째 카드 , 점수 : " << user_card_point << endl;

				cout << "카드를 더 받으시겠습니까 ? (Y/N) ";
				cin >> &yes_or_no;
				if (yes_or_no == 'n' || yes_or_no == 'N')break;
			}
		}
		//USER FIN

	}
}
