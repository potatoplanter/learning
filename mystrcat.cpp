#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, char* src)
{
	char* ret = dest;//
	assert(dest && src);
	//ÕÒµ½\0
	while (*dest != '\0')
	{
		dest++;
	}
	//×·¼Ósrc
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
	
}

int main()
{
	char arr1 [50]= { "son of " };
	char arr2[50] = { "a b****" };
	
	puts(my_strcat(arr1, arr2));
	return 0;
}