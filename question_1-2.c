#include "info.h"
void question_1_2(int seeweed,int coral, int gae ,int max_1,int max_2, int max_3)
{	YELLOW;
	printf("당신의 거북이는 바닷가에 들어왔습니다.");
	WHITE;
	printf("\n다음 성장기로 자라기위해서는 미역 %d/%d개 산호%d/%d개 동물성먹이 %d/%d가필요합니다. \n\n",max_1,seeweed,max_2,coral,gae,max_3);
	

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

	printf("3. ");
	ORIGINAL;
	printf("동물성 먹이");
	WHITE;
	printf("를 찾으로 떠난다(OX). \n");


}