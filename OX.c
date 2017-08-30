#include "info.h"

int OX ()
{
	int level,input;
	int temp[4]={0};
	int c,count=0;

	system("cls");
	UP:
	printf("\n\n\n\n\n\n\n\n\n\n\n문제의 난이도를 선택하여 주세요(1~5) :");
	scanf("%d",&level);

	system("cls");

for(c=0;c<4;c++)
{
	if(level==temp[c])
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n전에 이미 선택한 난이도 입니다");
		goto UP;
	}
}
	if(level==1)
	{
		
		printf("\n\n\n\n\n\n\n\n\n\n\n달팽이도 이빨이 있다  (1.○ 2.X) : ");
	
		scanf("%d",&input);
		level=temp[count];
		count++;
		if(input==1)
		{ YELLOW;
			printf("\n\n\n\n\n\n\n\n\n\n\n정답");
			Sleep(1000);
			printf("입니다");
			Sleep(1000);
			system("cls");
			printf("축하합니다 !\n");
			printf("먹이를 얻었습니다 !\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ＼                           ");
			printf("     ____/         ＼                         ");
			printf("    | ㅠ│___________＼                       ");
			printf("      ─│____________/_>                     ");
			printf("        υυ   υυ                           ");

			WHITE;
			return 1;
		}

		if(input==2)
		{	
			BLOOD;
			level=temp[count];
			count++;
			printf("\n\n\n\n\n\n\n\n\n\n\n정답");
			Sleep(1000);
			printf("이 아닙니다");
			Sleep(1000);
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n달팽이의 이빨은 보통은 수만개 어른 달팽이는 수억개라고 합니다");
			Sleep(1000);
			system("cls");
			printf("안타깝게도 먹이를 얻지 못했습니다\n");
			printf("                                              ");
			GREEN;
			printf("           ______                             ");
			printf("          /      ＼                           ");
			printf("     ____/         ＼                         ");
			printf("    | ㅠ│___________＼                       ");
			printf("      ─│____________/_>                     ");
			printf("        υυ   υυ                           ");
			WHITE;
			return 0;
		}

	}



	if(level==2)
	{
		
		printf("\n\n\n\n\n\n\n\n\n\n\n광견병은 개만걸린다  (1.○ 2.X) : ");
	
		scanf("%d",&input);


		if(input==1)
		{
			level=temp[count];
			count++;
			YELLOW;
			printf("\n\n\n\n\n\n\n\n\n\n\n정답");
			Sleep(1000);
			printf("입니다");
			Sleep(1000);
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n축하합니다 !\n");
			printf("\n\n\n\n\n\n\n\n\n\n\n먹이를 얻었습니다 !\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ＼                           ");
			printf("     ____/         ＼                         ");
			printf("    | ㅠ│___________＼                       ");
			printf("      ─│____________/_>                     ");
			printf("        υυ   υυ                           ");
			WHITE;
			return 2;
		}

		if(input==2)
		{
			level=temp[count];
			count++;
			BLOOD;
			printf("\n\n\n\n\n\n\n\n\n\n\n정답");
			Sleep(1000);
			printf("이 아닙니다");
			Sleep(1000);
			system("cls");
			printf("고양이도 걸린다고 합니다");
			Sleep(1000);
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n안타깝게도 먹이를 얻지 못했습니다\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ＼                           ");
			printf("     ____/         ＼                         ");
			printf("    | ㅠ│___________＼                       ");
			printf("      ─│____________/_>                     ");
			printf("        υυ   υυ                           ");
			WHITE;
			return 0;
		}
	}
	
		
	if(level==3)
	{	
		printf("\n\n\n\n\n\n\n\n\n\n\n신은 죽었다'라고 말한 철학자는 헤겔이다.  (1.○ 2.X) : ");
	
		scanf("%d",&input);


		if(input==2)
		{
			level=temp[count];
			count++;
			YELLOW;
			printf("\n\n\n\n\n\n\n\n\n\n\n정답");
			Sleep(1000);
			printf("입니다");
			Sleep(1000);
			system("cls");
			printf("축하합니다 !\n");
			printf("먹이를 얻었습니다 !\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ＼                           ");
			printf("     ____/         ＼                         ");
			printf("    | ㅠ│___________＼                       ");
			printf("      ─│____________/_>                     ");
			printf("        υυ   υυ                           ");
			WHITE;
			return 3;
		}

		if(input==1)
		{
			level=temp[count];
			count++;
			BLOOD;
			printf("\n\n\n\n\n\n\n\n\n\n\n정답");
			Sleep(1000);
			printf("이 아닙니다");
			Sleep(1000);
			system("cls");
			printf("니체입니다.");
			Sleep(1000);
			system("cls");
			printf("안타깝게도 먹이를 얻지 못했습니다\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ＼                           ");
			printf("     ____/         ＼                         ");
			printf("    | ㅠ│___________＼                       ");
			printf("      ─│____________/_>                     ");
			printf("        υυ   υυ                           ");
			WHITE;
			return 0;
		}

	}
	if(level==4)
	{	
		printf("\n\n\n\n\n\n\n\n\n\n\n파동의 진행과 매질의 진동 방향이 수직인 파동을 종파라 한다.  (1.○ 2.X) : ");
	
		scanf("%d",&input);


		if(input==2)
		{
			level=temp[count];
			count++;
			YELLOW;
			printf("\n\n\n\n\n\n\n\n\n\n\n정답");
			Sleep(1000);
			printf("입니다");
			Sleep(1000);
			system("cls");
			printf("축하합니다 !\n");
			printf("먹이를 얻었습니다 !\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ＼                           ");
			printf("     ____/         ＼                         ");
			printf("    | ㅠ│___________＼                       ");
			printf("      ─│____________/_>                     ");
			printf("        υυ   υυ                           ");
			WHITE;
			return 4;
		}

		if(input==1)
		{
			level=temp[count];
			count++;
			BLOOD;
			printf("\n\n\n\n\n\n\n\n\n\n\n정답");
			Sleep(1000);
			printf("이 아닙니다");
			Sleep(1000);
			system("cls");
			printf("횡파라고 합니다");
			Sleep(1000);
			system("cls");
			printf("안타깝게도 먹이를 얻지 못했습니다\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ＼                           ");
			printf("     ____/         ＼                         ");
			printf("    | ㅠ│___________＼                       ");
			printf("      ─│____________/_>                     ");
			printf("        υυ   υυ                           ");
			WHITE;
			return 0;
		}

	}
	
	if(level==5)
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n허블법칙은 현재 관측되는 은하들에서 거리가 멀수록 후퇴속도가 크고,\n후퇴속도가 클수록 멀다는 것입니다.\n그렇다면 빅뱅이후로부터 은하는 일정속도(등속팽창)로 멀어진다 . (1.○ 2.X) : ");
	
		scanf("%d",&input);


		if(input==2)
		{
			level=temp[count];
			count++;
			YELLOW;
			printf("\n\n\n\n\n\n\n\n\n\n\n정답");
			Sleep(1000);
			printf("입니다");
			Sleep(1000);
			system("cls");
			printf("축하합니다 !\n");
			printf("먹이를 얻었습니다 !\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ＼                           ");
			printf("     ____/         ＼                         ");
			printf("    | ㅠ│___________＼                       ");
			printf("      ─│____________/_>                     ");
			printf("        υυ   υυ                           ");
			WHITE;
			return 5;
		}

		if(input==1)
		{
			level=temp[count];
			count++;
			BLOOD;
			printf("\n\n\n\n\n\n\n\n\n\n\n정답");
			Sleep(1000);
			printf("이 아닙니다");
			Sleep(1000);
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n우주는 현재 가속팽창중이며 후퇴속도는 점점 커집니다.");
			Sleep(1000);
			system("cls");
			printf("안타깝게도 먹이를 얻지 못했습니다\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ＼                           ");
			printf("     ____/         ＼                         ");
			printf("    | ㅠ│___________＼                       ");
			printf("      ─│____________/_>                     ");
			printf("        υυ   υυ                           ");
			WHITE;
			return 0;
		}

	}

return 0;
}