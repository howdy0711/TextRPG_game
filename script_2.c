#include "info.h"
int script_2(int input, int life)
{
	switch(input)

	{
	case 1:
		{
		
			printf("\n����� �ź��̰� �̿� ���̸� ã���� �����ϴ�..\n");
			PlaySound(TEXT("����.wav"), NULL,SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
			life += 3;
		
		
			break;
		}
	case 2:
		{
			printf("\n����� �ź��̰� ��ȣ ���̸� ã���� �����ϴ�..\n");
			PlaySound(TEXT("����.wav"), NULL,SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
			life += 1;

			
			break;
		}

		
	}
	return life;
}


