#include "info.h"

int script_1(int input)
{
	switch(input)
	{
UP:
	case 1:
		{
		
			printf("\n당신의 거북이가 바다로 기어갑니다.\n");
			Sleep(500);
		
			return 1;
			break;
		}
	case 2:
		{
			printf("\n하루가 지나고, 당신의 거북이가 바다로 들어갑니다.\n");
			
			Sleep(1500);

			return 2;
			break;
		}
	case 3:
		{
			printf("\n일주일이 지나고, 당신의 거북이가 바다로 들어갑니니다.\n");
			
			Sleep(1500);

			return 3;
			break;
		}
	default :
		goto UP;
		break;
		
	}
}