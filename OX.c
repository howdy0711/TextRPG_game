#include "info.h"

int OX ()
{
	int level,input;
	int temp[4]={0};
	int c,count=0;

	system("cls");
	UP:
	printf("\n\n\n\n\n\n\n\n\n\n\n������ ���̵��� �����Ͽ� �ּ���(1~5) :");
	scanf("%d",&level);

	system("cls");

for(c=0;c<4;c++)
{
	if(level==temp[c])
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n���� �̹� ������ ���̵� �Դϴ�");
		goto UP;
	}
}
	if(level==1)
	{
		
		printf("\n\n\n\n\n\n\n\n\n\n\n�����̵� �̻��� �ִ�  (1.�� 2.X) : ");
	
		scanf("%d",&input);
		level=temp[count];
		count++;
		if(input==1)
		{ YELLOW;
			printf("\n\n\n\n\n\n\n\n\n\n\n����");
			Sleep(1000);
			printf("�Դϴ�");
			Sleep(1000);
			system("cls");
			printf("�����մϴ� !\n");
			printf("���̸� ������ϴ� !\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ��                           ");
			printf("     ____/         ��                         ");
			printf("    | �Ц�___________��                       ");
			printf("      ����____________/_>                     ");
			printf("        ����   ����                           ");

			WHITE;
			return 1;
		}

		if(input==2)
		{	
			BLOOD;
			level=temp[count];
			count++;
			printf("\n\n\n\n\n\n\n\n\n\n\n����");
			Sleep(1000);
			printf("�� �ƴմϴ�");
			Sleep(1000);
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n�������� �̻��� ������ ������ � �����̴� ���ﰳ��� �մϴ�");
			Sleep(1000);
			system("cls");
			printf("��Ÿ���Ե� ���̸� ���� ���߽��ϴ�\n");
			printf("                                              ");
			GREEN;
			printf("           ______                             ");
			printf("          /      ��                           ");
			printf("     ____/         ��                         ");
			printf("    | �Ц�___________��                       ");
			printf("      ����____________/_>                     ");
			printf("        ����   ����                           ");
			WHITE;
			return 0;
		}

	}



	if(level==2)
	{
		
		printf("\n\n\n\n\n\n\n\n\n\n\n���ߺ��� �����ɸ���  (1.�� 2.X) : ");
	
		scanf("%d",&input);


		if(input==1)
		{
			level=temp[count];
			count++;
			YELLOW;
			printf("\n\n\n\n\n\n\n\n\n\n\n����");
			Sleep(1000);
			printf("�Դϴ�");
			Sleep(1000);
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n�����մϴ� !\n");
			printf("\n\n\n\n\n\n\n\n\n\n\n���̸� ������ϴ� !\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ��                           ");
			printf("     ____/         ��                         ");
			printf("    | �Ц�___________��                       ");
			printf("      ����____________/_>                     ");
			printf("        ����   ����                           ");
			WHITE;
			return 2;
		}

		if(input==2)
		{
			level=temp[count];
			count++;
			BLOOD;
			printf("\n\n\n\n\n\n\n\n\n\n\n����");
			Sleep(1000);
			printf("�� �ƴմϴ�");
			Sleep(1000);
			system("cls");
			printf("����̵� �ɸ��ٰ� �մϴ�");
			Sleep(1000);
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n��Ÿ���Ե� ���̸� ���� ���߽��ϴ�\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ��                           ");
			printf("     ____/         ��                         ");
			printf("    | �Ц�___________��                       ");
			printf("      ����____________/_>                     ");
			printf("        ����   ����                           ");
			WHITE;
			return 0;
		}
	}
	
		
	if(level==3)
	{	
		printf("\n\n\n\n\n\n\n\n\n\n\n���� �׾���'��� ���� ö���ڴ� ����̴�.  (1.�� 2.X) : ");
	
		scanf("%d",&input);


		if(input==2)
		{
			level=temp[count];
			count++;
			YELLOW;
			printf("\n\n\n\n\n\n\n\n\n\n\n����");
			Sleep(1000);
			printf("�Դϴ�");
			Sleep(1000);
			system("cls");
			printf("�����մϴ� !\n");
			printf("���̸� ������ϴ� !\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ��                           ");
			printf("     ____/         ��                         ");
			printf("    | �Ц�___________��                       ");
			printf("      ����____________/_>                     ");
			printf("        ����   ����                           ");
			WHITE;
			return 3;
		}

		if(input==1)
		{
			level=temp[count];
			count++;
			BLOOD;
			printf("\n\n\n\n\n\n\n\n\n\n\n����");
			Sleep(1000);
			printf("�� �ƴմϴ�");
			Sleep(1000);
			system("cls");
			printf("��ü�Դϴ�.");
			Sleep(1000);
			system("cls");
			printf("��Ÿ���Ե� ���̸� ���� ���߽��ϴ�\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ��                           ");
			printf("     ____/         ��                         ");
			printf("    | �Ц�___________��                       ");
			printf("      ����____________/_>                     ");
			printf("        ����   ����                           ");
			WHITE;
			return 0;
		}

	}
	if(level==4)
	{	
		printf("\n\n\n\n\n\n\n\n\n\n\n�ĵ��� ����� ������ ���� ������ ������ �ĵ��� ���Ķ� �Ѵ�.  (1.�� 2.X) : ");
	
		scanf("%d",&input);


		if(input==2)
		{
			level=temp[count];
			count++;
			YELLOW;
			printf("\n\n\n\n\n\n\n\n\n\n\n����");
			Sleep(1000);
			printf("�Դϴ�");
			Sleep(1000);
			system("cls");
			printf("�����մϴ� !\n");
			printf("���̸� ������ϴ� !\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ��                           ");
			printf("     ____/         ��                         ");
			printf("    | �Ц�___________��                       ");
			printf("      ����____________/_>                     ");
			printf("        ����   ����                           ");
			WHITE;
			return 4;
		}

		if(input==1)
		{
			level=temp[count];
			count++;
			BLOOD;
			printf("\n\n\n\n\n\n\n\n\n\n\n����");
			Sleep(1000);
			printf("�� �ƴմϴ�");
			Sleep(1000);
			system("cls");
			printf("Ⱦ�Ķ�� �մϴ�");
			Sleep(1000);
			system("cls");
			printf("��Ÿ���Ե� ���̸� ���� ���߽��ϴ�\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ��                           ");
			printf("     ____/         ��                         ");
			printf("    | �Ц�___________��                       ");
			printf("      ����____________/_>                     ");
			printf("        ����   ����                           ");
			WHITE;
			return 0;
		}

	}
	
	if(level==5)
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n����Ģ�� ���� �����Ǵ� ���ϵ鿡�� �Ÿ��� �ּ��� ����ӵ��� ũ��,\n����ӵ��� Ŭ���� �ִٴ� ���Դϴ�.\n�׷��ٸ� ������ķκ��� ���ϴ� �����ӵ�(�����â)�� �־����� . (1.�� 2.X) : ");
	
		scanf("%d",&input);


		if(input==2)
		{
			level=temp[count];
			count++;
			YELLOW;
			printf("\n\n\n\n\n\n\n\n\n\n\n����");
			Sleep(1000);
			printf("�Դϴ�");
			Sleep(1000);
			system("cls");
			printf("�����մϴ� !\n");
			printf("���̸� ������ϴ� !\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ��                           ");
			printf("     ____/         ��                         ");
			printf("    | �Ц�___________��                       ");
			printf("      ����____________/_>                     ");
			printf("        ����   ����                           ");
			WHITE;
			return 5;
		}

		if(input==1)
		{
			level=temp[count];
			count++;
			BLOOD;
			printf("\n\n\n\n\n\n\n\n\n\n\n����");
			Sleep(1000);
			printf("�� �ƴմϴ�");
			Sleep(1000);
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n���ִ� ���� ������â���̸� ����ӵ��� ���� Ŀ���ϴ�.");
			Sleep(1000);
			system("cls");
			printf("��Ÿ���Ե� ���̸� ���� ���߽��ϴ�\n");
			GREEN;
			printf("           ______                             ");
			printf("          /      ��                           ");
			printf("     ____/         ��                         ");
			printf("    | �Ц�___________��                       ");
			printf("      ����____________/_>                     ");
			printf("        ����   ����                           ");
			WHITE;
			return 0;
		}

	}

return 0;
}