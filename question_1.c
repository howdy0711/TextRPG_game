#include "info.h"
void question_1(int seeweed,int coral,int max_1,int max_2)
{	YELLOW;
	printf("당신의 거북이는 바닷가에 들어왔습니다.");
	WHITE;
	printf("\n다음 성장기로 자라기위해서는 미역 %d/%d개 산호%d/%d개가필요합니다. \n\n",max_1,seeweed,max_2,coral);
	

	printf("1. ");
	GREEN;
	printf("미역");
	WHITE;
	printf("을 찾으로 떠난다(가위바위보 게임). \n");
	printf("2. ");
	GOLD;
	printf("산호");
	WHITE;
	printf("를 찾으로 떠난다(숫자게임). \n");

}