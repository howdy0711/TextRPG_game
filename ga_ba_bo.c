#include "info.h"

int ga_ba_bo(int age)
{
	int input,enemy,count=0,win=0;
	srand(time(NULL));
	system("cls");
	PlaySound(TEXT("�г�.wav"), NULL,SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
	if(age==1)
	{	
		fight_1();
		
	}
	if(age==2)
	{	
	
		fight_2();
		
	}
	
	printf("\n\n\n\n\n\n\n\n\n\n\n  �ٸ� ģ�� �ź��̿� �����߽��ϴ�. ���ݺ��� ���̸� �ΰ� �̴ϰ����� �����մϴ�");
	Sleep(1000);
	system("cls");
	BLOOD;
	printf("\n\n\n\n\n\n\n\n\n\n\n           �й� ");
	WHITE;
	printf("�ҽ� ���̸� ���� ���� �� ������ ��ȸ�� �� 3���Դϴ�");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n	                   �׷� ������ ���ڽ��ϴ�");
	Sleep(1000);
	
	system("cls");
	
	do{
	printf("\n\n\n\n\n\n\n\n\n\n\n                         �� ������ ���� ���� �� �Դϴ�");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n            �ݵ�� �¸��Ͽ��� ���� ���� �й�� ���� ó���մϴ�");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n                         1.���� 2.���� 3.�� : ");
	scanf("%d",&input);

	enemy=rand()%3+1;

	if(input==1&&enemy==2)
	{
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n                                   �����ϴ�\n\n\n");

	RED;
	printf("            ���");
	WHITE;
	printf("        ___             ��     /��\n");
	printf("                     __/___��                  �� ��____\n");
	printf("                    /_____   ��__                ��     ��\n");
	printf("                   ��_____                  /������      /\n");
	printf("                   ��_____                  ��������____/\n");
	printf("                   ��_____     __\n");
	printf("                    ��________/");
	}
	else if(input==1&&enemy==3)
	{
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n                                   �̰���ϴ�\n\n\n");


	win++;
	RED;
	printf("            ���");
	WHITE;
	printf("            _                                �� \n");
	printf("                           / ��                          /��\n");
	printf("                     ______��  ��___                     �� ��____\n");
	printf("                    /_____ ��                              ��     ��\n");
	printf("                   ��_____                            /������      /        \n");
	printf("                   ��_____       ___                  ��������____/ \n");
	printf("                    ��__________/   \n");
	Sleep(500);
	break;
	}

	else if(input==2&&enemy==1)
	{
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n                                   �̰���ϴ�\n\n\n");


	win++;
	RED;
	printf("                 ���");
	WHITE;
	printf("                           ��  ___ \n");
	printf("                       /��                       __/___��\n");
	printf("                       �� ��____                /_____   ��_\n");
	printf("                         ��     ��             ��_____\n");
	printf("                    /������      /             ��_____\n");
	printf("                    ��������____/              ��_____     __\n");
	printf("                                                ��________/\n");
	Sleep(500);
	break;
	}

	else if(input==2&&enemy==3)
	{
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n                                   �����ϴ�\n\n\n");


	RED;
	printf("                      ���");
	WHITE;
	printf("  _                               ��___ \n");
	printf("                           / ��                          __/___��\n");
	printf("                     ______��  ��___                    /_____   ��_\n");
	printf("                    /_____ ��                          ��_____\n");
	printf("                   ��_____                             ��_____\n");
	printf("                   ��_____       ___                   ��_____     __\n");
	printf("                    ��__________/                       ��________/\n");
	}
	else if(input==3&&enemy==1)
	{
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n                                   �����ϴ�\n\n\n");


	RED;
	printf("                 ���");
	WHITE;
	printf("                               ��     _\n");
	printf("                       /��                                / ��\n");
	printf("                       �� ��____                    ______��  ��___\n");
	printf("                         ��     ��                 /_____ ��\n");
	printf("                    /������      /                ��_____     \n");
	printf("                    ��������____/                 ��_____       ___\n");
	printf("                                                   ��__________/\n");
	}
	else if(input==3&&enemy==2)
	{
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n                                   �̰���ϴ�\n\n\n");


	win++;
	RED;
	printf("                     ���");
	WHITE;
	printf("    ___                           ��      _\n");
	printf("                       __/___��                                / ��\n");
	printf("                      /_____   ��_                       ______��  ��___\n");
	printf("                     ��_____                            /_____ ��\n");
	printf("                     ��_____                           ��_____     \n");
	printf("                     ��_____     __                    ��_____       ___\n");
	printf("                      ��________/                       ��__________/\n");
	Sleep(500);
	break;
	}

	else
	{
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n                                   �����ϴ�\n");
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
		printf("\n\n\n\n\n\n\n                                   �����մϴ� !\n");
		WHITE;
		printf("                                ���̸� ������ϴ� !\n\n");
		GREEN;
	printf("                                       ___                      \n");
	printf("                                      /   ��                    \n");
	printf("                                    (^��___/>                   \n");
	printf("                                       UU UU                    \n");
	WHITE;
	Sleep(8000);
	system("cls");
	return 1;
	}
	else
	{
	BLOOD;
	PlaySound(TEXT("����.wav"), NULL,SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
	printf("\n\n\n\n\n\n\n                        ��Ÿ���Ե� ���̸� ���� ���߽��ϴ�\n\n");
	GREEN;
	printf("                                        ___                      \n");
	printf("                                       /   ��                    \n");
	printf("                                    (�С�___/>                   \n");
	printf("                                        UU UU                    \n");
	WHITE;
	Sleep(10000);
	system("cls");  
	return 0;
	}
}