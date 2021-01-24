#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j]=' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		//打印第一行数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割行
		if (i < ROW - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}

}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("please move\n");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("已被占用\n");
			}
		}
		else
			printf("重新输入\n");
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("computer moving\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] != '*')
		{
			board[x][y] = '#';
			break;
		}
	}

}

int isFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//未满
				break;
			}
		}
	}
	return 1;//已满
}

char Judgement(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int f = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] == '*')//横三
			return 'p';
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] == '#')//横三
			return 'c';
	}
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] == '*')// 竖三
			return 'p';
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] == '#')// 竖三
			return 'c';
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] == '*')
		return 'p';
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] == '#')
		return 'c';
	if (board[0][0] == board[1][1] && board[1][1] == board[2][0] && board[1][1] == '*')
		return 'p';
	if (board[0][3] == board[1][2] && board[1][1] == board[2][0] && board[1][1] == '#')

		return 'c';
	f = isFull(board, ROW, COL);
	if(f==1)
		return 'd';
}