#include "info.h"

int main()
	
{
	
	int num,num2,i;
	int input,input2,input3;
	int life = 0;
	int seeweed =2,coral=1; //미역,산호 갯수
	int max_1,max_2,max_3;
	int std,age=1; // 나이 
	int gae=0; // 게 갯수 
	PlaySound(TEXT("동물의 세계.wav"), NULL,SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
	
	srand( (unsigned)time(NULL) );
	MAIN:
	
	WHITE;
	printf("────────────────────────────────────────\n");
	YELLOW;
	printf(" ■■■■ ■    ■ ■■■   ");
	BLUE_GREEN;
	printf("■■■  ■    ■ ■■■ ■       ■  ■■■  ■ \n");
	YELLOW;
	printf("    ■    ■    ■ ■      ");
	BLUE_GREEN;
	printf("■    ■ ■■  ■   ■   ■■   ■■ ■    ■ ■ \n");
	YELLOW;
	printf("    ■    ■■■■ ■■■  ");
	BLUE_GREEN;
	printf("■■■■ ■ ■ ■   ■   ■ ■ ■ ■ ■■■■ ■ \n");
	YELLOW;
	printf("    ■    ■    ■ ■      ");
	BLUE_GREEN;
	printf("■    ■ ■  ■■   ■   ■  ■   ■ ■    ■ ■  \n");
	YELLOW;
	printf("    ■    ■    ■ ■■■  ");
	BLUE_GREEN;
	printf("■    ■ ■    ■ ■■■ ■       ■ ■    ■ ■■■ \n\n");
	ORIGINAL;
	printf("                    ■■■   ■■■  ■      ■ ■■■  \n");
	printf("                   ■       ■    ■ ■■  ■■ ■      \n");         
	printf("                   ■  ■■ ■■■■ ■ ■■ ■ ■■■     \n");  
	printf("                   ■    ■ ■    ■ ■  ■  ■ ■      \n");     
	printf("                   ■■■■ ■    ■ ■      ■ ■■■     \n");  

	WHITE;
	printf("                                   \n\n\n");
	printf("                                 1.Game Start\n");
	printf("                                 2.Game Load\n");
	printf("                                 3.Game End\n");
	printf("                                 4.Game Make\n");
	printf("\n\n");
	WHITE;
	printf("────────────────────────────────────────");
    
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
	printf("\n\n\n\n\n\n\n\n\n\n                       불러오기 기능은 준비되지 않았습니다");
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


	// 처음 게임시작메뉴
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
	printf("\n\n\n\n\n\n\n\n\n\n\n                   민달팽이 키우기는 아직준비되지 않았습니다");
	Sleep(500);
	system("cls");
	WHITE;
		goto START;
}

	if(num2==3)
{
	
	system("cls");
	RED;
	printf("\n\n\n\n\n\n\n\n\n\n\n                    귀뚜라미 키우기는 아직준비되지 않았습니다");
	Sleep(500);
	system("cls");
	WHITE;
		goto START;
}

	if(num2==2)
{	
	system("cls");
	RED;
	printf("\n\n\n\n\n\n\n\n\n\n\n                    나비 키우기는 아직준비되지 않았습니다");
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
		printf("		     당신이 선택한 동물은 '거북이' 입니다\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n");
		printf("         당신의 거북이는 지금 알속에 있습니다. 이제 곧 알에서 깨어납니다\n\n\n\n\n\n\n\n\n\n\n\n");
		Sleep(1000);
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n");
		printf("				잠시만 기다려주세요\n\n\n\n\n\n\n\n\n\n\n\n\n");
		egg(); 
		PlaySound(TEXT("짠물소리.wav"), NULL,SND_FILENAME | SND_ASYNC | /*SND_LOOP |*/ SND_NODEFAULT);
		Sleep(1000);




    system("cls");
	profile(seeweed,coral,age);
	
	gotoxy(0,12); // 질문위치
	question_0();
	gotoxy(67,21); //선택위치
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

	if(std==1) // 바로들어갔을 경우 채워야할 미역, 산호, 게 갯수
	{
		max_1=2;
		max_2=1;
		max_3=5;
	}
	if(std==2) // 하루가 지난 뒤 들어갔을 경우 채워야할 미역, 산호 , 게 갯수
	{
		max_1=2;
		max_2=2;
		max_3=10;
	}
	if(std==3) // 일주일이 지난 뒤 들어 갔을 경우 채워야할 미역 , 산호, 게 갯수
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

		

		if(input2 == 1)  // 작은 거북이가 미역을 먹이를 찾으로 가는경우
		{
			
			

			gotoxy(0,12);
			clear();
			gotoxy(0,15);
			WHITE;
			printf("\n 미역을 발견 했습니다!!\n");
			gotoxy(0,1);
			Sleep(250);
			clear_();
			gotoxy(0,1);
			BLUE_GREEN;
			printf("                   ___\n");
			printf("               ___/   ＼\n");
			printf("              /   ＼/  /\n");
			printf("              ＼ ＼ ＼ ＼\n");
			printf("               /  /  // /\n");
			printf("	       ＼ ＼ ＼ ＼\n");
			printf("		/  /  // /\n");
			GRAY;
			printf("              /￣￣￣￣￣＼\n");
			WHITE;
			gotoxy(0,12);
			clear();
			gotoxy(0,15);
			printf("\n 미역을 발견 했습니다!!\n");
			Sleep(250);
			gotoxy(0,12);
			clear();
			Sleep(150);
			gotoxy(0,15);
			printf("\n 미역을 발견 했습니다!!\n");
			gotoxy(0,12);
			Sleep(250);
			clear();
			gotoxy(0,12);

			Sleep(500);
			question_2(); // 가위바위보에 대한질문 
			gotoxy(67,21);
			printf(" ");
			gotoxy(67,21);
			scanf("%d",&input3);
			
			

			if(input3==1){ //  1번을 선택하면 가위바위보 실행
			gotoxy(0,12);
			clear();
			gotoxy(0,0);
			seeweed += ga_ba_bo(age);
			}

			// 가위바위보 실행 ,이기면 반복 탈출, 지거나 비기면 반복
			///////////////////////////////가위바위보 게임위치 
			profile(seeweed,coral,age);
			gotoxy(0,12);
			clear();
			gotoxy(0,15);             
			printf("\n다시 보금자리로 돌아갑니다\n");
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
		 if(input2 == 2) // 작은 거북이가 산호먹이를 찾으로 갈 경우 
		 {
		gotoxy(0,12);
		clear();
		gotoxy(0,15);
		WHITE;
		printf("\n 산호를 발견 했습니다!!\n");
		gotoxy(0,1);
		Sleep(250);
		clear_();
		gotoxy(0,1);
		GOLD;
		printf("             __\n");
		printf("             ＼＼       __\n");
		printf("            __ ＼＼    ││\n");
		printf("            ＼＼││   / /\n");
		printf("              ＼││ / / \n");
		printf("                ＼ / /\n");
		printf("    	         ││\n");
		printf("                 ││\n");
		GRAY;
		printf("              /￣￣￣￣￣＼\n");
		printf("             /             ＼\n");
		

		WHITE;
		gotoxy(0,12);
		clear();
		gotoxy(0,15);

		printf("\n 산호를 발견 했습니다!!\n");
		Sleep(250);
		gotoxy(0,12);
		clear();
		Sleep(150);
		gotoxy(0,15);
		printf("\n 산호를 발견 했습니다!!\n");
		gotoxy(0,12);
		Sleep(250);
		clear();
		gotoxy(0,12);

		Sleep(500);
		question_2_2(); // 산호를void question_2_2()
		gotoxy(67,21);
		printf(" ");
		gotoxy(67,21);
		scanf("%d",&input3);
		printf(" ");
		gotoxy(67,21);
		
		if(input3==1)//  먹는다를 선택하면 숫자게임실행
		{
			gotoxy(0,12);
			clear();
			coral += number_game(age); // 숫자게임 실행 ,이기면 반복 탈출, 지거나 비기면 반복
		//////////////////////////////숫자게임 게임위치 
		}
		system("cls");
		profile(seeweed,coral,age);
		gotoxy(0,1);
		clear_();

		gotoxy(0,12);
		clear();
		gotoxy(0,15);
		printf("\n 다시 보금자리로 돌아갑니다\n");

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
	}while(seeweed<max_1||coral<max_2); // 미역과, 산호 개수를 만족하면 중간 거북이 크기로 성장
	
	// 미역과 산호 갯수 초기화, 나이 +1 증가 
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


		if(input2 == 1)  // 중간 거북이가 미역먹이를 찾으로 떠나는 경우
		{
			

			gotoxy(0,12);
			clear();
			gotoxy(0,15);
			printf("\n 미역을 발견 했습니다!!\n");
			gotoxy(0,1);
			Sleep(250);
			clear_();
			gotoxy(0,1);
			BLUE_GREEN;
			printf("                   ___\n");
			printf("               ___/   ＼\n");
			printf("              /   ＼/  /\n");
			printf("              ＼ ＼ ＼ ＼\n");
			printf("               /  /  // /\n");
			printf("	       ＼ ＼ ＼ ＼\n");
			printf("		/  /  // /\n");
			GRAY;
			printf("              /￣￣￣￣￣＼\n");
			WHITE;
			gotoxy(0,12);
			clear();
			gotoxy(0,15);
			printf("\n 미역을 발견 했습니다!!\n");
			Sleep(250);
			gotoxy(0,12);
			clear();
			Sleep(150);
			gotoxy(0,15);
			printf("\n 미역을 발견 했습니다!!\n");
			gotoxy(0,12);
			Sleep(250);
			clear();
			gotoxy(0,12);

			Sleep(500);
			question_2(); // 가위바위보에 대한질문 
			gotoxy(67,21);
			scanf("%d",&input3);
			printf(" ");
			gotoxy(67,21);

			

			if(input3==1){ //  먹는다를 선택하면 숫자게임실행
			gotoxy(0,12);
			clear();
			gotoxy(0,0);
			seeweed += ga_ba_bo(age);
			}
		
			// 가위바위보 실행 ,이기면 반복 탈출, 지거나 비기면 반복
			///////////////////////////////가위바위보 게임위치 
			system("cls");
			profile(seeweed,coral,age);
			r_profile(seeweed,coral,gae);
			gotoxy(0,1);
			clear_();

			gotoxy(0,12);
			clear();
			gotoxy(0,15);
			printf("\n다시 보금자리로 돌아갑니다\n");
			Sleep(500);
			
			gotoxy(0,1);
			m_turtle_move();

			Sleep(500);
			in_middle();
			
			gotoxy(0,15);
			clear();
			gotoxy(0,12);

			
		

		}

		if(input2 == 2) // 중간 거북이가 산호먹이를 찾으로 떠나는 경우
		{
		gotoxy(0,12);
		clear();
		gotoxy(0,15);
		printf("\n 산호를 발견 했습니다!!\n");
		gotoxy(0,1);
		Sleep(250);
		clear_();
		gotoxy(0,1);
		GOLD;
		printf("             __\n");
		printf("             ＼＼       __\n");
		printf("            __ ＼＼    ││\n");
		printf("            ＼＼││   / /\n");
		printf("              ＼││ / / \n");
		printf("                ＼ / /\n");
		printf("    	         ││\n");
		printf("                 ││\n");
		GRAY;
		printf("              /￣￣￣￣￣＼\n");
		printf("             /             ＼\n");
		

		WHITE;
		gotoxy(0,12);
		clear();
		gotoxy(0,15);

		printf("\n 산호를 발견 했습니다!!\n");
		Sleep(250);
		gotoxy(0,12);
		clear();
		Sleep(150);
		gotoxy(0,15);
		printf("\n 산호를 발견 했습니다!!\n");
		gotoxy(0,12);
		Sleep(250);
		clear();
		gotoxy(0,12);

		Sleep(500);
		question_2_2(); // 산호를void question_2_2()
		gotoxy(67,21);
		printf(" ");
		gotoxy(67,21);
		scanf("%d",&input3);
		printf(" ");
		gotoxy(67,21);
		
		if(input3==1)//  먹는다를 선택하면 숫자게임실행
		{
			gotoxy(0,12);
			clear();
			coral += number_game(age); // 숫자게임 실행 ,이기면 반복 탈출, 지거나 비기면 반복
		//////////////////////////////숫자게임 게임위치 
		}
		system("cls");
		profile(seeweed,coral,age);
		r_profile(seeweed,coral,gae);
		gotoxy(0,1);
		clear_();

		gotoxy(0,12);
		clear();
		gotoxy(0,15);
		printf("\n 다시 보금자리로 돌아갑니다\n");

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

			if(input2 == 3) // 중간 거북이가 산호먹이를 찾으로 떠나는 경우
		{
			

			gotoxy(0,12);
			clear();
			gotoxy(0,15);
			printf("\n 작은게를 발견 했습니다!!\n");
			gotoxy(0,1);
			Sleep(250);
			clear_();
			gotoxy(0,1);
			RED;
			printf(" ＼＼_/ /            │＼/│\n");
			printf("   ＼  /              ＼  /\n");
			printf("    ││    ●    ●   ││\n");
			printf("     ＼＼ /￣￣￣￣￣＼/ /\n");
			printf("     ___ /             ＼___\n");
			printf("    / __│              │__＼\n");
			printf("   / /  │              │  ＼＼\n");
			printf("  ││ __＼_____________/ __ ││\n");
			printf("  │││                   │││\n");
			WHITE;
			gotoxy(0,12);
			clear();
			gotoxy(0,15);
			printf("\n 작은게 발견 했습니다!!\n");
			Sleep(250);
			gotoxy(0,12);
			clear();
			Sleep(150);
			gotoxy(0,15);
			printf("\n 작은게 발견 했습니다!!\n");
			gotoxy(0,12);
			Sleep(250);
			clear();
			gotoxy(0,12);

			Sleep(500);
			question_2_3(); // 작은게를 먹을지 않먹을지에대한 질문 
			gotoxy(67,21);
			scanf("%d",&input3);
			printf(" ");
			gotoxy(67,21);

			

			if(input3==1){ //  먹는다를 선택하면 OX게임실행
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
			printf("\n다시 보금자리로 돌아갑니다\n");
			Sleep(500);
			
			gotoxy(0,1);
			m_turtle_move();

			Sleep(500);
			in_middle();
			
			gotoxy(0,15);
			clear();
			gotoxy(0,12);

			
		

		}

	}while(seeweed<max_1||coral<max_2||gae<max_3);  // 미역, 산호, 게 갯수를 만족하게 되면 거북이 성장그리고 엔딩
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

	
		printf("\n\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
		printf("\n");
		ORIGINAL;
		printf("                                ┌\n");
		YELLOW;
		printf("                                   CHOICE ");
		BLUE_GREEN;
		printf("ANIMAL\n");
		ORIGINAL;
		printf("                                                 ┘\n\n");
		YELLOW;
		printf("                                 1.거북이 (TURTLE)\n\n");
		BLOOD;
		printf("                                 2.나비 (준비중)\n\n");
		printf("                                 3.귀뚜라미 (준비중)\n\n");
		printf("                                 4.민달팽이 (준비중)\n\n");
		YELLOW;
		printf("                                 5.뒤로가기 \n\n\n\n");
		WHITE;
		printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
}



void make()
{
	system("cls");
printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n\n\n\n\n\n\n\n\n\n\n");
printf("               만든이 : TEAM 약육강식\n");
printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n\n\n\n\n\n\n\n\n\n\n");
Sleep(1000);
system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
printf("			━ TEAM READER : 하 승 민\n\n");
Sleep(1000);
printf("			━ STORY : 홍 정 식\n\n");
Sleep(1000);
printf("			━ PROGRAMMING : 주 재 현\n\n");
Sleep(1000);
printf("			━ PROGRAMMING : 김 태 용\n\n");
Sleep(1000);
printf("			━ DATA SEARCH : 이 동 준\n\n");
Sleep(1000);
printf("			━ ANIMALL PAINT : 정 상 우\n\n");
Sleep(1000);
printf("			━ MANAGER  : 권 효 정\n\n");
Sleep(1000);
printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n\n\n");
Sleep(2500);
system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("		               시작화면으로 돌아갑니다.\n");
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
	printf("  			               /   ＼\n");
	printf("			             ●＼___/> \n");
	printf(" 			                UU UU \n");
	printf("\n\n\n\n\n\n\n\n\n\n");
	WHITE;
	Sleep(2000);
	system("cls");
}

void end()
{	
	
	system("cls");
	printf("\n\n\n〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓");
	printf("\n\n\n\n\n\n                            정말로 종료하시겠습니까?\n\n");
	RED;
	printf("				1. 종료\n");
	YELLOW;
	printf("				2. 다시시작\n\n\n\n\n\n\n");
	WHITE;
	printf("〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓");

	
	
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
	printf("               /   ＼                      \n");
	printf("             ●＼___/>                     \n");
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
	printf("            /   ＼                      \n");
	printf("          ●＼___/>                     \n");
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
	printf("          /   ＼                      \n");
	printf("        ●＼___/>                     \n");
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
	printf("       /   ＼                      \n");
	printf("     ●＼___/>                     \n");
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
	printf("    /   ＼                      \n");
	printf("  ●＼___/>                     \n");
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
	printf("  /   ＼                      \n");
	printf("●＼___/>                     \n");
	printf("   UU UU                      \n");

	gotoxy(0,1);
	Sleep(1000);
	clear_();
	gotoxy(0,1);
	//2

}
//프로필
void profile(int seeweed, int coral,int age)

	
{
	PlaySound(TEXT("짠물소리.wav"), NULL,SND_FILENAME | SND_ASYNC | /*SND_LOOP |*/ SND_NODEFAULT);
	WHITE;
	printf("〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓");
	GREEN;
	if(age==1)
		turtle_(seeweed,coral);
	if(age==2)
		in_middle();
	WHITE;
	printf("〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓\n");
	printf("                                                     \n");
	printf("                                                     \n");
	printf("                                                     \n");
	printf("                                                     \n");
	printf("                                                     \n");
	printf("                                                     \n");
	printf("					                         선 택 \n");
	printf("					                        〓〓〓〓\n");
    printf("					                       │      │\n");
	printf("					                        〓〓〓〓\n");
	printf("────────────────────────────────────────");
	}

void big_turtle_move()
{
	GREEN;
	printf("                                              \n");
	printf("                                              \n");
	printf("                  __________                  \n");
	printf("                _/  ＼___/  ＼                \n");
	printf("            ___/ ＼__/   ＼_/＼               \n");
	printf("           (●│ /   ＼__/  ＼│              \n");
	printf("            <--＼＼__/___＼___/>              \n");
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
	printf("            _/  ＼___/  ＼                \n");
	printf("        ___/ ＼__/   ＼_/＼               \n");
	printf("       (●│ /   ＼__/  ＼│              \n");
	printf("        <--＼＼__/___＼___/>              \n");
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
	printf("         _/  ＼___/  ＼                \n");
	printf("     ___/ ＼__/   ＼_/＼               \n");
	printf("    (●│ /   ＼__/  ＼│              \n");
	printf("     <--＼＼__/___＼___/>              \n");
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
	printf("         _/  ＼___/  ＼                \n");
	printf("     ___/ ＼__/   ＼_/＼               \n");
	printf("    (●│ /   ＼__/  ＼│              \n");
	printf("     <--＼＼__/___＼___/>              \n");
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



