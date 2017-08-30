#include "info.h"

int ga_ba_bo(int age)
{
	int input,enemy,count=0,win=0;
	srand(time(NULL));
	system("cls");
	PlaySound(TEXT("분노.wav"), NULL,SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
	if(age==1)
	{	
		fight_1();
		
	}
	if(age==2)
	{	
	
		fight_2();
		
	}
	
	printf("\n\n\n\n\n\n\n\n\n\n\n  다른 친구 거북이와 마주했습니다. 지금부터 먹이를 두고 미니게임을 시작합니다");
	Sleep(1000);
	system("cls");
	BLOOD;
	printf("\n\n\n\n\n\n\n\n\n\n\n           패배 ");
	WHITE;
	printf("할시 먹이를 얻지 못할 수 있으며 기회는 총 3번입니다");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n	                   그럼 무운을 빌겠습니다");
	Sleep(1000);
	
	system("cls");
	
	do{
	printf("\n\n\n\n\n\n\n\n\n\n\n                         이 게임은 가위 바위 보 입니다");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n            반드시 승리하여야 비기는 것은 패배와 같이 처리합니다");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n                         1.가위 2.바위 3.보 : ");
	scanf("%d",&input);

	enemy=rand()%3+1;

	if(input==1&&enemy==2)
	{
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n                                   졌습니다\n\n\n");

	RED;
	printf("            상대");
	WHITE;
	printf("        ___             나     /＼\n");
	printf("                     __/___＼                  ＼ ＼____\n");
	printf("                    /_____   ＼__                ＼     ＼\n");
	printf("                   │_____                  /￣￣￣      /\n");
	printf("                   │_____                  ￣￣￣＼____/\n");
	printf("                   │_____     __\n");
	printf("                    ＼________/");
	}
	else if(input==1&&enemy==3)
	{
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n                                   이겼습니다\n\n\n");


	win++;
	RED;
	printf("            상대");
	WHITE;
	printf("            _                                나 \n");
	printf("                           / ＼                          /＼\n");
	printf("                     ______＼  ＼___                     ＼ ＼____\n");
	printf("                    /_____ ￣                              ＼     ＼\n");
	printf("                   │_____                            /￣￣￣      /        \n");
	printf("                   │_____       ___                  ￣￣￣＼____/ \n");
	printf("                    ＼__________/   \n");
	Sleep(500);
	break;
	}

	else if(input==2&&enemy==1)
	{
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n                                   이겼습니다\n\n\n");


	win++;
	RED;
	printf("                 상대");
	WHITE;
	printf("                           나  ___ \n");
	printf("                       /＼                       __/___＼\n");
	printf("                       ＼ ＼____                /_____   ＼_\n");
	printf("                         ＼     ＼             │_____\n");
	printf("                    /￣￣￣      /             │_____\n");
	printf("                    ￣￣￣＼____/              │_____     __\n");
	printf("                                                ＼________/\n");
	Sleep(500);
	break;
	}

	else if(input==2&&enemy==3)
	{
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n                                   졌습니다\n\n\n");


	RED;
	printf("                      상대");
	WHITE;
	printf("  _                               나___ \n");
	printf("                           / ＼                          __/___＼\n");
	printf("                     ______＼  ＼___                    /_____   ＼_\n");
	printf("                    /_____ ￣                          │_____\n");
	printf("                   │_____                             │_____\n");
	printf("                   │_____       ___                   │_____     __\n");
	printf("                    ＼__________/                       ＼________/\n");
	}
	else if(input==3&&enemy==1)
	{
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n                                   졌습니다\n\n\n");


	RED;
	printf("                 상대");
	WHITE;
	printf("                               나     _\n");
	printf("                       /＼                                / ＼\n");
	printf("                       ＼ ＼____                    ______＼  ＼___\n");
	printf("                         ＼     ＼                 /_____ ￣\n");
	printf("                    /￣￣￣      /                │_____     \n");
	printf("                    ￣￣￣＼____/                 │_____       ___\n");
	printf("                                                   ＼__________/\n");
	}
	else if(input==3&&enemy==2)
	{
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n                                   이겼습니다\n\n\n");


	win++;
	RED;
	printf("                     상대");
	WHITE;
	printf("    ___                           나      _\n");
	printf("                       __/___＼                                / ＼\n");
	printf("                      /_____   ＼_                       ______＼  ＼___\n");
	printf("                     │_____                            /_____ ￣\n");
	printf("                     │_____                           │_____     \n");
	printf("                     │_____     __                    │_____       ___\n");
	printf("                      ＼________/                       ＼__________/\n");
	Sleep(500);
	break;
	}

	else
	{
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n                                   비겼습니다\n");
	}

	Sleep(1000);
	system("cls");

	count+=1;

	}while(count<3);

	Sleep(1000);
	system("cls");
	if(win==1)
	{
		YELLOW;
		PlaySound(TEXT("Game Over.wav"), NULL,SND_FILENAME | SND_ASYNC |/* SND_LOOP */ SND_NODEFAULT);
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