#include "info.h"

int script_1(int input)
{
	switch(input)
	{
UP:
	case 1:
		{
		
			printf("\n����� �ź��̰� �ٴٷ� ���ϴ�.\n");
			Sleep(500);
		
			return 1;
			break;
		}
	case 2:
		{
			printf("\n�Ϸ簡 ������, ����� �ź��̰� �ٴٷ� ���ϴ�.\n");
			
			Sleep(1500);

			return 2;
			break;
		}
	case 3:
		{
			printf("\n�������� ������, ����� �ź��̰� �ٴٷ� ���ϴϴ�.\n");
			
			Sleep(1500);

			return 3;
			break;
		}
	default :
		goto UP;
		break;
		
	}
}