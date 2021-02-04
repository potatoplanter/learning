#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int check(void)
{
	int a = 0x11223344;
	char* p = (char*)&a;
	if (*p == 0x11)
		return 0;
	if (*p == 0x44)
		return 1;
}
int main()
{
	int ret = check();
	if(ret==0)
		printf("´ó¶Ë");
	if(ret==1)
		printf("Ð¡¶Ë");
}