#include "info.h"
int number_game(int age)
{
	int computer,mynum,realnum=0,mycount=0,comcount=0;

	PlaySound(TEXT("�г�.wav"), NULL,SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);

	if(age==1)
	{	
		fight_1();
		
	}

	if(age==2)
	{	
	
		fight_2();
		
	}

	
	printf("\n\n\n\n\n\n\n\n\n\n\n   �ٸ� ģ�� �ź��̿� �����߽��ϴ�. ���ݺ��� ���̸� �ΰ� �̴ϰ����� �����մϴ�");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n           �й��ҽ� ���̸� ���� ���� �� ������ ��ȸ�� �� 3���Դϴ�");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n	                   �׷� ������ ���ڽ��ϴ�");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n	                   ���� ������ 31�����Դϴ�");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n1~3������ ���ڸ� �Է��Ҽ��ְ�, ���������ڸ� �Է��ϰ� 31�̻��� ������ �й��մϴ�.");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n                 ����̸��� ���ڸ� ���� �մϴ�. �غ����ּ���");
	Sleep(1000);
	system("cls");
	do{

	printf("\n\n\n\n\n\n\n\n\n\n\n                         ��� ���ڸ� �Է��Ͻðڽ��ñ�? ");
	scanf("%d",&mynum);

	if(mynum==1)
	{
		realnum+=1;
			printf("\n\n\n\n\n\n\n\n\n\n\n                    �÷��̾ ������ ������ ������ ���� : %d\n",realnum);
		mycount=realnum;
	}
	if(mynum==2)
	{
		realnum+=2;
		printf("\n\n\n\n\n\n\n\n\n\n\n                    �÷��̾ ������ ������ ������ ���� : %d\n",realnum);
		mycount=realnum;
	}
	if(mynum==3)
	{
		realnum+=3;
		printf("\n\n\n\n\n\n\n\n\n\n\n                    �÷��̾ ������ ������ ������ ���� : %d\n",realnum);
		mycount=realnum;
	}
	if(realnum<31)
	{
	srand(time(NULL));

	computer=rand()%3+1;
	
	printf("\n\n\n\n\n\n\n\n\n\n\n                       ��ǻ�Ͱ� ���ڸ� �����ϴ� ���Դϴ�\n");
	Sleep(1000);
	system("cls");
	if(computer==1)
	{
		realnum+=1;
		printf("\n\n\n\n\n\n\n\n\n\n\n                    ��ǻ�Ͱ� ������ ������ ������ ���� : %d\n",realnum);
		comcount=realnum;
	}
	if(computer==2)
	{
		realnum+=2;
		printf("\n\n\n\n\n\n\n\n\n\n\n                    ��ǻ�Ͱ� ������ ������ ������ ���� : %d\n",realnum);
		comcount=realnum;
	}
	if(computer==3)
	{
		realnum+=3;
		printf("\n\n\n\n\n\n\n\n\n\n\n                    ��ǻ�Ͱ� ������ ������ ������ ���� : %d\n",realnum);
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
