#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char input[20] = { 0 };
	system("shutdown -s -t 180");//system()函数执行系统命令
	printf("别想玩我电脑嗷，三分钟之后关机\n");
	while (1) {
		scanf("%s", input);
		if (strcmp(input, "chyyy") == 0)
		{
			system("shutdown -a");
			printf("不愧是你");
			break;
		}
		printf("错了吧，憨憨");
	}
	return 0;
}