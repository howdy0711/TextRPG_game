#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <string.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

#define COL GetStdHandle(STD_OUTPUT_HANDLE)        // 콘솔창의 핸들정보 받기
#define BLACK SetConsoleTextAttribute(COL, 0x0000);        // 검정색
#define DARK_BLUE SetConsoleTextAttribute(COL, 0x0001);        // 파란색
#define GREEN SetConsoleTextAttribute(COL, 0x0002);        // 녹색
#define BLUE_GREEN SetConsoleTextAttribute(COL, 0x0003);        // 청녹색
#define BLOOD SetConsoleTextAttribute(COL, 0x0004);        // 검붉은색
#define PURPLE SetConsoleTextAttribute(COL, 0x0005);        // 보라색
#define GOLD SetConsoleTextAttribute(COL, 0x0006);        // 금색
#define ORIGINAL SetConsoleTextAttribute(COL, 0x0007);        // 밝은 회색 (ORIGINAL CONSOLE COLOR)
#define GRAY SetConsoleTextAttribute(COL, 0x0008);        // 회색
#define BLUE SetConsoleTextAttribute(COL, 0x0009);        // 파란색
#define HIGH_GREEN SetConsoleTextAttribute(COL, 0x000a);        // 연두색
#define SKY_BLUE SetConsoleTextAttribute(COL, 0x000b);        // 하늘색
#define RED SetConsoleTextAttribute(COL, 0x000c);        // 빨간색
#define PLUM SetConsoleTextAttribute(COL, 0x000d);        // 자주색
#define YELLOW SetConsoleTextAttribute(COL, 0x000e);        // 노란색
#define WHITE SetConsoleTextAttribute(COL, 0x000f);        // 흰색



void start();
void make();
void gotoxy(int , int );
void turtle_(int , int);
void turtle_2();
int script_1(int);
int script_2(int , int );
int script_3(int , int );
void question_0();
void egg();
void end();
void clear();
void clear_();
void turtle_move();
void m_turtle_move();
void big_turtle_move();
void question_1(int, int,int,int);
void question_2();
void profile(int, int,int);
void clear_3();
int ga_ba_bo(int );
void in_little();
void in_middle();
int number_game(int );
void question_2_2();
void fight_2();
void fight_1();
void m_profile(int  ,int,int );
void r_profile(int ,int , int);
int OX ();
void question_2_3();
void question_1_2(int ,int , int ,int ,int , int);
void ending();

