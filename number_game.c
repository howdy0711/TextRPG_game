#include "info.h"
int number_game(int age)
{
	int computer,mynum,realnum=0,mycount=0,comcount=0;

	PlaySound(TEXT("분노.wav"), NULL,SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);

	if(age==1)
	{	
		fight_1();
		
	}

	if(age==2)
	{	
	
		fight_2();
		
	}

	
	printf("\n\n\n\n\n\n\n\n\n\n\n   다른 친구 거북이와 마주했습니다. 지금부터 먹이를 두고 미니게임을 시작합니다");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n           패배할시 먹이를 얻지 못할 수 있으며 기회는 총 3번입니다");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n	                   그럼 무운을 빌겠습니다");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n	                   현재 게임은 31게임입니다");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n1~3까지의 숫자를 입력할수있고, 마지막숫자를 입력하고 31이상이 나오면 패배합니다.");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n                 당신이먼저 숫자를 선택 합니다. 준비해주세요");
	Sleep(1000);
	system("cls");
	do{

	printf("\n\n\n\n\n\n\n\n\n\n\n                         몇개의 숫자를 입력하시겠습시까? ");
	scanf("%d",&mynum);

	if(mynum==1)
	{
		realnum+=1;
			printf("\n\n\n\n\n\n\n\n\n\n\n                    플레이어가 진행한 숫자중 마지막 숫자 : %d\n",realnum);
		mycount=realnum;
	}
	if(mynum==2)
	{
		realnum+=2;
		printf("\n\n\n\n\n\n\n\n\n\n\n                    플레이어가 진행한 숫자중 마지막 숫자 : %d\n",realnum);
		mycount=realnum;
	}
	if(mynum==3)
	{
		realnum+=3;
		printf("\n\n\n\n\n\n\n\n\n\n\n                    플레이어가 진행한 숫자중 마지막 숫자 : %d\n",realnum);
		mycount=realnum;
	}
	if(realnum<31)
	{
	srand(time(NULL));

	computer=rand()%3+1;
	
	printf("\n\n\n\n\n\n\n\n\n\n\n                       컴퓨터가 숫자를 선택하는 중입니다\n");
	Sleep(1000);
	system("cls");
	if(computer==1)
	{
		realnum+=1;
		printf("\n\n\n\n\n\n\n\n\n\n\n                    컴퓨터가 진행한 숫자중 마지막 숫자 : %d\n",realnum);
		comcount=realnum;
	}
	if(computer==2)
	{
		realnum+=2;
		printf("\n\n\n\n\n\n\n\n\n\n\n                    컴퓨터가 진행한 숫자중 마지막 숫자 : %d\n",realnum);
		comcount=realnum;
	}
	if(computer==3)
	{
		realnum+=3;
		printf("\n\n\n\n\n\n\n\n\n\n\n                    컴퓨터가 진행한 숫자중 마지막 숫자 : %d\n",realnum);
		comcount=realnum;
	}
	}
	Sleep(1000);
	system("cls");
	}while(realnum<31);

		if(comcount>=31)
		{
			PlaySound(TEXT("Game Over.wav"), NULL,SND_FILENAME | SND_ASYNC |/* SND_LOOP */  SND_NODEFAULT);
		YELLOW;
		printf("\n\n\n\n\n\n\n                                   축하합니다 !\n");
		WHITE;
		printf("                                먹이를 얻었습니다 !\n\n");
		GREEN;
		printf("                                       ___                      \n");
		printf("                                      /   ＼                    \n");
		printf("                                    (^＼___/>                   \n");
		printf("                                       UU UU                    \n");
		WHITE;
		Sleep(8000);
		system("cls");
		return 1;
		}

		else
		{
		BLOOD;
		PlaySound(TEXT("절망.wav"), NULL,SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
		printf("\n\n\n\n\n\n\n                        안타깝게도 먹이를 얻지 못했습니다\n\n");
		GREEN;
		printf("                                        ___                      \n");
		printf("                                       /   ＼                    \n");
		printf("                                    (ㅠ＼___/>                   \n");
		printf("                                        UU UU                    \n");
		WHITE;
		Sleep(10000);
		system("cls"); 
		return 0;
		}
		}
