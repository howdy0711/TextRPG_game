#include "info.h"
int script_2(int input, int life)
{
	switch(input)

	{
	case 1:
		{
		
			printf("\n당신의 거북이가 미역 먹이를 찾으로 떠납니다..\n");
			PlaySound(TEXT("개망.wav"), NULL,SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
			life += 3;
		
		
			break;
		}
	case 2:
		{
			printf("\n당신의 거북이가 산호 먹이를 찾으로 떠납니다..\n");
			PlaySound(TEXT("개망.wav"), NULL,SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
			life += 1;

			
			break;
		}

		
	}
	return life;
}


