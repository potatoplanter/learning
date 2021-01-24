#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void menu()
{
	printf("******************************************\n");
	printf("********    1.play    0.quit  ************\n");
	printf("******************************************\n");
}
void game() {
	int num = 0;
	num = rand();
	int ret = num % 100;
	int guess = 0;
	while (1) {
		scanf("%d", &guess);
		if (ret > guess)
			printf("猜小了\n");
		else if (ret < guess)
			printf("猜大了\n");
		else {
			printf("猜对了\n");
			break;
		}
		}
}

int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("choose\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("quit");
			break;
		default:
			printf("wrong choice");
			break;
		}
	} while (input);
		return 0;
}