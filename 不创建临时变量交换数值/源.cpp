#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��������ʱ������������
int main()
{
	int a = 3;//011
	int b = 5;//101
	a = a ^ b;//110
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}