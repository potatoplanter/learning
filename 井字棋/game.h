#pragma once
#define ROW 3
#define COL 3

//ÉùÃ÷
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char Judgement(char board[ROW][COL], int row, int col);
int isFull(char board[ROW][COL], int row, int col);