#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <string.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

#define COL GetStdHandle(STD_OUTPUT_HANDLE)        // �ܼ�â�� �ڵ����� �ޱ�
#define BLACK SetConsoleTextAttribute(COL, 0x0000);        // ������
#define DARK_BLUE SetConsoleTextAttribute(COL, 0x0001);        // �Ķ���
#define GREEN SetConsoleTextAttribute(COL, 0x0002);        // ���
#define BLUE_GREEN SetConsoleTextAttribute(COL, 0x0003);        // û���
#define BLOOD SetConsoleTextAttribute(COL, 0x0004);        // �˺�����
#define PURPLE SetConsoleTextAttribute(COL, 0x0005);        // �����
#define GOLD SetConsoleTextAttribute(COL, 0x0006);        // �ݻ�
#define ORIGINAL SetConsoleTextAttribute(COL, 0x0007);        // ���� ȸ�� (ORIGINAL CONSOLE COLOR)
#define GRAY SetConsoleTextAttribute(COL, 0x0008);        // ȸ��
#define BLUE SetConsoleTextAttribute(COL, 0x0009);        // �Ķ���
#define HIGH_GREEN SetConsoleTextAttribute(COL, 0x000a);        // ���λ�
#define SKY_BLUE SetConsoleTextAttribute(COL, 0x000b);        // �ϴû�
#define RED SetConsoleTextAttribute(COL, 0x000c);        // ������
#define PLUM SetConsoleTextAttribute(COL, 0x000d);        // ���ֻ�
#define YELLOW SetConsoleTextAttribute(COL, 0x000e);        // �����
#define WHITE SetConsoleTextAttribute(COL, 0x000f);        // ���



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

