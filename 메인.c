#include "info.h"

int main()
	
{
	
	int num,num2,i;
	int input,input2,input3;
	int life = 0;
	int seeweed =2,coral=1; //�̿�,��ȣ ����
	int max_1,max_2,max_3;
	int std,age=1; // ���� 
	int gae=0; // �� ���� 
	PlaySound(TEXT("������ ����.wav"), NULL,SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
	
	srand( (unsigned)time(NULL) );
	MAIN:
	
	WHITE;
	printf("��������������������������������������������������������������������������������\n");
	YELLOW;
	printf(" ����� ��    �� ����   ");
	BLUE_GREEN;
	printf("����  ��    �� ���� ��       ��  ����  �� \n");
	YELLOW;
	printf("    ��    ��    �� ��      ");
	BLUE_GREEN;
	printf("��    �� ���  ��   ��   ���   ��� ��    �� �� \n");
	YELLOW;
	printf("    ��    ����� ����  ");
	BLUE_GREEN;
	printf("����� �� �� ��   ��   �� �� �� �� ����� �� \n");
	YELLOW;
	printf("    ��    ��    �� ��      ");
	BLUE_GREEN;
	printf("��    �� ��  ���   ��   ��  ��   �� ��    �� ��  \n");
	YELLOW;
	printf("    ��    ��    �� ����  ");
	BLUE_GREEN;
	printf("��    �� ��    �� ���� ��       �� ��    �� ���� \n\n");
	ORIGINAL;
	printf("                    ����   ����  ��      �� ����  \n");
	printf("                   ��       ��    �� ���  ��� ��      \n");         
	printf("                   ��  ��� ����� �� ��� �� ����     \n");  
	printf("                   ��    �� ��    �� ��  ��  �� ��      \n");     
	printf("                   ����� ��    �� ��      �� ����     \n");  

	WHITE;
	printf("                                   \n\n\n");
	printf("                                 1.Game Start\n");
	printf("                                 2.Game Load\n");
	printf("                                 3.Game End\n");
	printf("                                 4.Game Make\n");
	printf("\n\n");
	WHITE;
	printf("��������������������������������������������������������������������������������");
    
	scanf("%d",&num);
	switch(num)
	{
	case 1:
	START:
    start();
	break;

	case 2:
	system("cls");
	RED;
	printf("\n\n\n\n\n\n\n\n\n\n                       �ҷ����� ����� �غ���� �ʾҽ��ϴ�");
	Sleep(700);
	system("cls");
	goto MAIN;
	break;

	case 3:
	end();
	scanf("%d",&i);
	fflush(stdin);
	if(i==1){
		Sleep(500);
		system("cls");
		goto END;
	}
	if(i==2)
		system("cls");
	goto MAIN;
	break;

	case 4:
	YELLOW;
	make();
	WHITE;
	goto MAIN;
	break;
	}


	// ó�� ���ӽ��۸޴�
	scanf("%d",&num2);
	if(num2==5)
{
	
	system("cls");
		goto MAIN;
}

	if(num2==4)
{
	
	system("cls");
	RED;
	printf("\n\n\n\n\n\n\n\n\n\n\n                   �δ����� Ű���� �����غ���� �ʾҽ��ϴ�");
	Sleep(500);
	system("cls");
	WHITE;
		goto START;
}

	if(num2==3)
{
	
	system("cls");
	RED;
	printf("\n\n\n\n\n\n\n\n\n\n\n                    �ͶѶ�� Ű���� �����غ���� �ʾҽ��ϴ�");
	Sleep(500);
	system("cls");
	WHITE;
		goto START;
}

	if(num2==2)
{	
	system("cls");
	RED;
	printf("\n\n\n\n\n\n\n\n\n\n\n                    ���� Ű���� �����غ���� �ʾҽ��ϴ�");
	Sleep(500);
	system("cls");
	WHITE;
		goto START;
}

	if(num2==1)
	{
		
		PlaySound(TEXT("Depapepe Swingin'Happy X'mas.wav"), NULL,SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
		Sleep(500);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("		     ����� ������ ������ '�ź���' �Դϴ�\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n");
		printf("         ����� �ź��̴� ���� �˼ӿ� �ֽ��ϴ�. ���� �� �˿��� ����ϴ�\n\n\n\n\n\n\n\n\n\n\n\n");
		Sleep(1000);
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n");
		printf("				��ø� ��ٷ��ּ���\n\n\n\n\n\n\n\n\n\n\n\n\n");
		egg(); 
		PlaySound(TEXT("§���Ҹ�.wav"), NULL,SND_FILENAME | SND_ASYNC | /*SND_LOOP |*/ SND_NODEFAULT);
		Sleep(1000);




    system("cls");
	profile(seeweed,coral,age);
	
	gotoxy(0,12); // ������ġ
	question_0();
	gotoxy(67,21); //������ġ
	printf(" ");
	gotoxy(67,21);

	scanf("%d",&input);
	gotoxy(67,21);
	printf(" ");
	gotoxy(67,21);

	gotoxy(0,12);
	clear();
	
	gotoxy(0,15);
	std = script_1(input);

	if(std==1) // �ٷε��� ��� ä������ �̿�, ��ȣ, �� ����
	{
		max_1=2;
		max_2=1;
		max_3=5;
	}
	if(std==2) // �Ϸ簡 ���� �� ���� ��� ä������ �̿�, ��ȣ , �� ����
	{
		max_1=2;
		max_2=2;
		max_3=10;
	}
	if(std==3) // �������� ���� �� ��� ���� ��� ä������ �̿� , ��ȣ, �� ����
	{
		max_1=10;
		max_2=20;
		max_3=15;
	}
		
	turtle_move();	
	in_little();

	gotoxy(0,12);
	clear();
	gotoxy(0,12);

		do{
		

		gotoxy(0,12);
		question_1(seeweed,coral,max_1,max_2);
		gotoxy(67,21);
		scanf("%d",&input2);
		printf(" ");
		gotoxy(67,21);
		
		gotoxy(0,12);
		clear();
		
		gotoxy(0,15);
		life = script_2(input2,life);
		gotoxy(0,1);
		clear_();
		gotoxy(0,1);
		turtle_move();
		Sleep(500);

		

		if(input2 == 1)  // ���� �ź��̰� �̿��� ���̸� ã���� ���°��
		{
			
			

			gotoxy(0,12);
			clear();
			gotoxy(0,15);
			WHITE;
			printf("\n �̿��� �߰� �߽��ϴ�!!\n");
			gotoxy(0,1);
			Sleep(250);
			clear_();
			gotoxy(0,1);
			BLUE_GREEN;
			printf("                   ___\n");
			printf("               ___/   ��\n");
			printf("              /   ��/  /\n");
			printf("              �� �� �� ��\n");
			printf("               /  /  // /\n");
			printf("	       �� �� �� ��\n");
			printf("		/  /  // /\n");
			GRAY;
			printf("              /������������\n");
			WHITE;
			gotoxy(0,12);
			clear();
			gotoxy(0,15);
			printf("\n �̿��� �߰� �߽��ϴ�!!\n");
			Sleep(250);
			gotoxy(0,12);
			clear();
			Sleep(150);
			gotoxy(0,15);
			printf("\n �̿��� �߰� �߽��ϴ�!!\n");
			gotoxy(0,12);
			Sleep(250);
			clear();
			gotoxy(0,12);

			Sleep(500);
			question_2(); // ������������ �������� 
			gotoxy(67,21);
			printf(" ");
			gotoxy(67,21);
			scanf("%d",&input3);
			
			

			if(input3==1){ //  1���� �����ϸ� ���������� ����
			gotoxy(0,12);
			clear();
			gotoxy(0,0);
			seeweed += ga_ba_bo(age);
			}

			// ���������� ���� ,�̱�� �ݺ� Ż��, ���ų� ���� �ݺ�
			///////////////////////////////���������� ������ġ 
			profile(seeweed,coral,age);
			gotoxy(0,12);
			clear();
			gotoxy(0,15);             
			printf("\n�ٽ� �����ڸ��� ���ư��ϴ�\n");
			gotoxy(0,1);
			clear_();
			gotoxy(0,1);

			turtle_move;
			in_little();
			
			gotoxy(0,12);
			clear();
			gotoxy(0,12);
		    question_1(seeweed, coral, max_1, max_2);
		}
		 if(input2 == 2) // ���� �ź��̰� ��ȣ���̸� ã���� �� ��� 
		 {
		gotoxy(0,12);
		clear();
		gotoxy(0,15);
		WHITE;
		printf("\n ��ȣ�� �߰� �߽��ϴ�!!\n");
		gotoxy(0,1);
		Sleep(250);
		clear_();
		gotoxy(0,1);
		GOLD;
		printf("             __\n");
		printf("             ����       __\n");
		printf("            __ ����    ����\n");
		printf("            ��������   / /\n");
		printf("              ������ / / \n");
		printf("                �� / /\n");
		printf("    	         ����\n");
		printf("                 ����\n");
		GRAY;
		printf("              /������������\n");
		printf("             /             ��\n");
		

		WHITE;
		gotoxy(0,12);
		clear();
		gotoxy(0,15);

		printf("\n ��ȣ�� �߰� �߽��ϴ�!!\n");
		Sleep(250);
		gotoxy(0,12);
		clear();
		Sleep(150);
		gotoxy(0,15);
		printf("\n ��ȣ�� �߰� �߽��ϴ�!!\n");
		gotoxy(0,12);
		Sleep(250);
		clear();
		gotoxy(0,12);

		Sleep(500);
		question_2_2(); // ��ȣ��void question_2_2()
		gotoxy(67,21);
		printf(" ");
		gotoxy(67,21);
		scanf("%d",&input3);
		printf(" ");
		gotoxy(67,21);
		
		if(input3==1)//  �Դ´ٸ� �����ϸ� ���ڰ��ӽ���
		{
			gotoxy(0,12);
			clear();
			coral += number_game(age); // ���ڰ��� ���� ,�̱�� �ݺ� Ż��, ���ų� ���� �ݺ�
		//////////////////////////////���ڰ��� ������ġ 
		}
		system("cls");
		profile(seeweed,coral,age);
		gotoxy(0,1);
		clear_();

		gotoxy(0,12);
		clear();
		gotoxy(0,15);
		printf("\n �ٽ� �����ڸ��� ���ư��ϴ�\n");

		gotoxy(0,1);
		clear_();
		gotoxy(0,1);
		turtle_move();

		Sleep(500);

		in_little();

		gotoxy(0,12);
		clear();
		gotoxy(0,12);

	
		gotoxy(0,15);

	
			
		} 
	}while(seeweed<max_1||coral<max_2); // �̿���, ��ȣ ������ �����ϸ� �߰� �ź��� ũ��� ����
	
	// �̿��� ��ȣ ���� �ʱ�ȭ, ���� +1 ���� 
	seeweed=2;
	coral=1;  
	age+=1;

	do
	{
		system("cls");
		WHITE;
		gotoxy(0,0);
		profile(seeweed,coral,age);
		
		r_profile(seeweed,coral,gae);
		

		gotoxy(0,12);
		question_1_2(seeweed,coral,gae,max_1,max_2,max_3);
		gotoxy(67,21);
		scanf("%d",&input2);
		printf(" ");
		gotoxy(67,21);
		
		gotoxy(0,12);
		clear();
		
		gotoxy(0,15);
		life = script_2(input2,life);
		gotoxy(0,1);
		clear_();
		gotoxy(0,1);
		m_turtle_move();
		Sleep(500);


		if(input2 == 1)  // �߰� �ź��̰� �̿����̸� ã���� ������ ���
		{
			

			gotoxy(0,12);
			clear();
			gotoxy(0,15);
			printf("\n �̿��� �߰� �߽��ϴ�!!\n");
			gotoxy(0,1);
			Sleep(250);
			clear_();
			gotoxy(0,1);
			BLUE_GREEN;
			printf("                   ___\n");
			printf("               ___/   ��\n");
			printf("              /   ��/  /\n");
			printf("              �� �� �� ��\n");
			printf("               /  /  // /\n");
			printf("	       �� �� �� ��\n");
			printf("		/  /  // /\n");
			GRAY;
			printf("              /������������\n");
			WHITE;
			gotoxy(0,12);
			clear();
			gotoxy(0,15);
			printf("\n �̿��� �߰� �߽��ϴ�!!\n");
			Sleep(250);
			gotoxy(0,12);
			clear();
			Sleep(150);
			gotoxy(0,15);
			printf("\n �̿��� �߰� �߽��ϴ�!!\n");
			gotoxy(0,12);
			Sleep(250);
			clear();
			gotoxy(0,12);

			Sleep(500);
			question_2(); // ������������ �������� 
			gotoxy(67,21);
			scanf("%d",&input3);
			printf(" ");
			gotoxy(67,21);

			

			if(input3==1){ //  �Դ´ٸ� �����ϸ� ���ڰ��ӽ���
			gotoxy(0,12);
			clear();
			gotoxy(0,0);
			seeweed += ga_ba_bo(age);
			}
		
			// ���������� ���� ,�̱�� �ݺ� Ż��, ���ų� ���� �ݺ�
			///////////////////////////////���������� ������ġ 
			system("cls");
			profile(seeweed,coral,age);
			r_profile(seeweed,coral,gae);
			gotoxy(0,1);
			clear_();

			gotoxy(0,12);
			clear();
			gotoxy(0,15);
			printf("\n�ٽ� �����ڸ��� ���ư��ϴ�\n");
			Sleep(500);
			
			gotoxy(0,1);
			m_turtle_move();

			Sleep(500);
			in_middle();
			
			gotoxy(0,15);
			clear();
			gotoxy(0,12);

			
		

		}

		if(input2 == 2) // �߰� �ź��̰� ��ȣ���̸� ã���� ������ ���
		{
		gotoxy(0,12);
		clear();
		gotoxy(0,15);
		printf("\n ��ȣ�� �߰� �߽��ϴ�!!\n");
		gotoxy(0,1);
		Sleep(250);
		clear_();
		gotoxy(0,1);
		GOLD;
		printf("             __\n");
		printf("             ����       __\n");
		printf("            __ ����    ����\n");
		printf("            ��������   / /\n");
		printf("              ������ / / \n");
		printf("                �� / /\n");
		printf("    	         ����\n");
		printf("                 ����\n");
		GRAY;
		printf("              /������������\n");
		printf("             /             ��\n");
		

		WHITE;
		gotoxy(0,12);
		clear();
		gotoxy(0,15);

		printf("\n ��ȣ�� �߰� �߽��ϴ�!!\n");
		Sleep(250);
		gotoxy(0,12);
		clear();
		Sleep(150);
		gotoxy(0,15);
		printf("\n ��ȣ�� �߰� �߽��ϴ�!!\n");
		gotoxy(0,12);
		Sleep(250);
		clear();
		gotoxy(0,12);

		Sleep(500);
		question_2_2(); // ��ȣ��void question_2_2()
		gotoxy(67,21);
		printf(" ");
		gotoxy(67,21);
		scanf("%d",&input3);
		printf(" ");
		gotoxy(67,21);
		
		if(input3==1)//  �Դ´ٸ� �����ϸ� ���ڰ��ӽ���
		{
			gotoxy(0,12);
			clear();
			coral += number_game(age); // ���ڰ��� ���� ,�̱�� �ݺ� Ż��, ���ų� ���� �ݺ�
		//////////////////////////////���ڰ��� ������ġ 
		}
		system("cls");
		profile(seeweed,coral,age);
		r_profile(seeweed,coral,gae);
		gotoxy(0,1);
		clear_();

		gotoxy(0,12);
		clear();
		gotoxy(0,15);
		printf("\n �ٽ� �����ڸ��� ���ư��ϴ�\n");

		gotoxy(0,1);
		clear_();
		gotoxy(0,1);
		m_turtle_move();

		Sleep(500);

		in_middle();

		gotoxy(0,12);
		clear();
		gotoxy(0,12);

	
		gotoxy(0,15);

		}

			if(input2 == 3) // �߰� �ź��̰� ��ȣ���̸� ã���� ������ ���
		{
			

			gotoxy(0,12);
			clear();
			gotoxy(0,15);
			printf("\n �����Ը� �߰� �߽��ϴ�!!\n");
			gotoxy(0,1);
			Sleep(250);
			clear_();
			gotoxy(0,1);
			RED;
			printf(" ����_/ /            ����/��\n");
			printf("   ��  /              ��  /\n");
			printf("    ����    ��    ��   ����\n");
			printf("     ���� /������������/ /\n");
			printf("     ___ /             ��___\n");
			printf("    / __��              ��__��\n");
			printf("   / /  ��              ��  ����\n");
			printf("  ���� __��_____________/ __ ����\n");
			printf("  ������                   ������\n");
			WHITE;
			gotoxy(0,12);
			clear();
			gotoxy(0,15);
			printf("\n ������ �߰� �߽��ϴ�!!\n");
			Sleep(250);
			gotoxy(0,12);
			clear();
			Sleep(150);
			gotoxy(0,15);
			printf("\n ������ �߰� �߽��ϴ�!!\n");
			gotoxy(0,12);
			Sleep(250);
			clear();
			gotoxy(0,12);

			Sleep(500);
			question_2_3(); // �����Ը� ������ �ʸ����������� ���� 
			gotoxy(67,21);
			scanf("%d",&input3);
			printf(" ");
			gotoxy(67,21);

			

			if(input3==1){ //  �Դ´ٸ� �����ϸ� OX���ӽ���
			gotoxy(0,12);
			clear();
			gotoxy(0,0);
			gae += OX();
			}
			system("cls");
			profile(seeweed,coral,age);
			r_profile(seeweed,coral,gae);
			gotoxy(0,1);
			clear_();

			gotoxy(0,12);
			clear();
			gotoxy(0,15);
			printf("\n�ٽ� �����ڸ��� ���ư��ϴ�\n");
			Sleep(500);
			
			gotoxy(0,1);
			m_turtle_move();

			Sleep(500);
			in_middle();
			
			gotoxy(0,15);
			clear();
			gotoxy(0,12);

			
		

		}

	}while(seeweed<max_1||coral<max_2||gae<max_3);  // �̿�, ��ȣ, �� ������ �����ϰ� �Ǹ� �ź��� ����׸��� ����
Sleep(3000);
system("cls");
ending();
Sleep(1500);
system("cls");
goto MAIN;


END:
	return 0;
}

}
void start()
{
	system("cls");

	
		printf("\n\n��������������������������������������������������������������������������������\n");
		printf("\n");
		ORIGINAL;
		printf("                                ��\n");
		YELLOW;
		printf("                                   CHOICE ");
		BLUE_GREEN;
		printf("ANIMAL\n");
		ORIGINAL;
		printf("                                                 ��\n\n");
		YELLOW;
		printf("                                 1.�ź��� (TURTLE)\n\n");
		BLOOD;
		printf("                                 2.���� (�غ���)\n\n");
		printf("                                 3.�ͶѶ�� (�غ���)\n\n");
		printf("                                 4.�δ����� (�غ���)\n\n");
		YELLOW;
		printf("                                 5.�ڷΰ��� \n\n\n\n");
		WHITE;
		printf("��������������������������������������������������������������������������������\n");
}



void make()
{
	system("cls");
printf("��������������������������������������������������������������������������������\n\n\n\n\n\n\n\n\n\n\n");
printf("               ������ : TEAM ��������\n");
printf("��������������������������������������������������������������������������������\n\n\n\n\n\n\n\n\n\n\n");
Sleep(1000);
system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("��������������������������������������������������������������������������������\n");
printf("			�� TEAM READER : �� �� ��\n\n");
Sleep(1000);
printf("			�� STORY : ȫ �� ��\n\n");
Sleep(1000);
printf("			�� PROGRAMMING : �� �� ��\n\n");
Sleep(1000);
printf("			�� PROGRAMMING : �� �� ��\n\n");
Sleep(1000);
printf("			�� DATA SEARCH : �� �� ��\n\n");
Sleep(1000);
printf("			�� ANIMALL PAINT : �� �� ��\n\n");
Sleep(1000);
printf("			�� MANAGER  : �� ȿ ��\n\n");
Sleep(1000);
printf("��������������������������������������������������������������������������������\n\n\n");
Sleep(2500);
system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("		               ����ȭ������ ���ư��ϴ�.\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
		Sleep(700);
	
}





void gotoxy(int x, int y)
{
 COORD Cur;
 Cur.X=x;
 Cur.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);
}



void egg()
{ 

	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("			              ***** \n");
	printf("			             ******* \n");
	printf("			            ********* \n");
	printf("			             ******* \n");
	printf("			              ***** \n");
	printf("\n\n\n\n\n\n\n\n\n\n");
	Sleep(500);
	system("cls");
	Sleep(500);
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("			              ***** \n");
	printf("			             ******* \n");
	printf("			            ********* \n");
	printf("			             ******* \n");
	printf("			              ***** \n");
	printf("\n\n\n\n\n\n\n\n\n\n");
	Sleep(500);
	system("cls");
	Sleep(500);
	
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("			              ***** \n");
	printf("			             ******* \n");
	printf("			            ********* \n");
	printf("			             ******* \n");
	printf("			              ***** \n");
	printf("\n\n\n\n\n\n\n\n\n\n");
	Sleep(1500);
	system("cls");
	GREEN;
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("					___\n");
	printf("  			               /   ��\n");
	printf("			             �ܡ�___/> \n");
	printf(" 			                UU UU \n");
	printf("\n\n\n\n\n\n\n\n\n\n");
	WHITE;
	Sleep(2000);
	system("cls");
}

void end()
{	
	
	system("cls");
	printf("\n\n\n�����������������������������������������");
	printf("\n\n\n\n\n\n                            ������ �����Ͻðڽ��ϱ�?\n\n");
	RED;
	printf("				1. ����\n");
	YELLOW;
	printf("				2. �ٽý���\n\n\n\n\n\n\n");
	WHITE;
	printf("�����������������������������������������");

	
	
}

void clear()
{
	int i;
	for(i=1;i<8;i++)
	printf("                                                                                  ");
}
void clear_()
{
	int i;
	for(i=1;i<11;i++)
	printf("                                           \n");
}

void turtle_move()
{
	gotoxy(0,1);
	clear_();
	gotoxy(0,1);
	GREEN;
	printf("                                           \n");
	printf("                                           \n");
	printf("                                           \n");
	printf("                                           \n");
	printf("                ___                        \n");
	printf("               /   ��                      \n");
	printf("             �ܡ�___/>                     \n");
	printf("                UU UU                      \n");
	
	gotoxy(0,1);
	Sleep(250);
	clear_();
	Sleep(250);
	gotoxy(0,1);
	printf("                                        \n");
	printf("                                        \n");
	printf("                                        \n");
	printf("                                        \n");
	printf("             ___                        \n");
	printf("            /   ��                      \n");
	printf("          �ܡ�___/>                     \n");
	printf("             UU UU                      \n");

	gotoxy(0,1);
	Sleep(250);
	clear_();
	Sleep(250);
	gotoxy(0,1);
	printf("                                      \n");
	printf("                                      \n");
	printf("                                      \n");
	printf("                                      \n");
	printf("           ___                        \n");
	printf("          /   ��                      \n");
	printf("        �ܡ�___/>                     \n");
	printf("           UU UU                      \n");

	gotoxy(0,1);
	Sleep(250);
	clear_();
	Sleep(250);
	gotoxy(0,1);

	printf("                                   \n");
	printf("                                   \n");
	printf("                                   \n");
	printf("                                   \n");
	printf("        ___                        \n");
	printf("       /   ��                      \n");
	printf("     �ܡ�___/>                     \n");
	printf("        UU UU                      \n");

	gotoxy(0,1);
	Sleep(250);
	clear_();
	Sleep(250);
	gotoxy(0,1);

	printf("                                \n");
	printf("                                \n");
	printf("                                \n");
	printf("                                \n");
	printf("     ___                        \n");
	printf("    /   ��                      \n");
	printf("  �ܡ�___/>                     \n");
	printf("     UU UU                      \n");

	
	gotoxy(0,1);
	Sleep(250);
	clear_();
	Sleep(250);
	gotoxy(0,1);

	printf("                              \n");
	printf("                              \n");
	printf("                              \n");
	printf("                              \n");
	printf("   ___                        \n");
	printf("  /   ��                      \n");
	printf("�ܡ�___/>                     \n");
	printf("   UU UU                      \n");

	gotoxy(0,1);
	Sleep(1000);
	clear_();
	gotoxy(0,1);
	//2

}
//������
void profile(int seeweed, int coral,int age)

	
{
	PlaySound(TEXT("§���Ҹ�.wav"), NULL,SND_FILENAME | SND_ASYNC | /*SND_LOOP |*/ SND_NODEFAULT);
	WHITE;
	printf("�����������������������������������������");
	GREEN;
	if(age==1)
		turtle_(seeweed,coral);
	if(age==2)
		in_middle();
	WHITE;
	printf("�����������������������������������������\n");
	printf("                                                     \n");
	printf("                                                     \n");
	printf("                                                     \n");
	printf("                                                     \n");
	printf("                                                     \n");
	printf("                                                     \n");
	printf("					                         �� �� \n");
	printf("					                        �����\n");
    printf("					                       ��      ��\n");
	printf("					                        �����\n");
	printf("��������������������������������������������������������������������������������");
	}

void big_turtle_move()
{
	GREEN;
	printf("                                              \n");
	printf("                                              \n");
	printf("                  __________                  \n");
	printf("                _/  ��___/  ��                \n");
	printf("            ___/ ��__/   ��_/��               \n");
	printf("           (�ܦ� /   ��__/  ����              \n");
	printf("            <--����__/___��___/>              \n");
	printf("                  UU        UU                \n");
	printf("                                              \n");
	printf("                                              \n");
gotoxy(0,1);
Sleep(350);
clear_();
gotoxy(0,1);

	printf("                                          \n");
	printf("                                          \n");
	printf("              __________                  \n");
	printf("            _/  ��___/  ��                \n");
	printf("        ___/ ��__/   ��_/��               \n");
	printf("       (�ܦ� /   ��__/  ����              \n");
	printf("        <--����__/___��___/>              \n");
	printf("              UU        UU                \n");
	printf("                                          \n");
	printf("                                          \n");

gotoxy(0,1);
Sleep(350);
clear_();
gotoxy(0,1);

	printf("                                       \n");
	printf("                                       \n");
	printf("           __________                  \n");
	printf("         _/  ��___/  ��                \n");
	printf("     ___/ ��__/   ��_/��               \n");
	printf("    (�ܦ� /   ��__/  ����              \n");
	printf("     <--����__/___��___/>              \n");
	printf("           UU        UU                \n");
	printf("                                       \n");
	printf("                                       \n");


gotoxy(0,1);
Sleep(350);
clear_();
gotoxy(0,1);
	
	printf("                                       \n");
	printf("                                       \n");
	printf("           __________                  \n");
	printf("         _/  ��___/  ��                \n");
	printf("     ___/ ��__/   ��_/��               \n");
	printf("    (�ܦ� /   ��__/  ����              \n");
	printf("     <--����__/___��___/>              \n");
	printf("           UU        UU                \n");
	printf("                                       \n");
	printf("                                       \n");

gotoxy(0,1);
Sleep(350);
clear_();

}


void clear_3()
{ int i;
	for( i=0;i<14;i++)
		printf("                                                   \n");
}



