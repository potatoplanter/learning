#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char input[20] = { 0 };
	system("shutdown -s -t 180");//system()����ִ��ϵͳ����
	printf("�������ҵ���໣�������֮��ػ�\n");
	while (1) {
		scanf("%s", input);
		if (strcmp(input, "chyyy") == 0)
		{
			system("shutdown -a");
			printf("��������");
			break;
		}
		printf("���˰ɣ�����");
	}
	return 0;
}