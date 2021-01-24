#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("******************************\n");
	printf("******  1.play   0.quit  *****\n");
	printf("******************************\n");

}
void game() 
{
	char judge = 0;
	char board[ROW][COL] = { 0 };//数组存放走出的棋盘信息
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board,ROW,COL);//打印棋盘
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		judge = Judgement(board, ROW, COL);
		if (judge == 'p')
		{
			printf("YOU'VE WON,CONGRATULATE!");
			break;
		}
		if (judge == 'd')
		{
			printf("THAT'S A DRAW,PLAY AGAIN");
			break;
		}

		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		Judgement(board, ROW, COL);
		judge = Judgement(board, ROW, COL);
		if (judge == 'c')
		{
			printf("YOU LOST,LOSER   >_<");
			break;
		}
		if (judge == 'd')
		{
			printf("THAT'S A DRAW,PLAY AGAIN");
			break;
		}
	}

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("PRESS 1 TO PLAY\n");
		printf("PRESS 0 TO QUIT\n");
		printf(">>>>>>>>>>>>>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("QUIT THE GAME");
			break;
		default:
			printf("CHOOSE AGAIN");
			break;
		}

	} while (input == 1);

}
int main() 
{
	test();
	return 0;
}