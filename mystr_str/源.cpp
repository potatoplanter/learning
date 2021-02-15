#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
#include<assert.h>
char* my_strstr(char* p1, char* p2)
{
	assert(p1 && p2);
	char* s1 = p1;//防止p1p2被修改
	char* s2 = p2;
	char* cur = p1;//记录上一次开始验证的位置
	if (*p2 == '/0')
	{
		return p1;
	}
	while (*cur)
	{
		s1 = cur;//重新从上一次进入循环下一位进行验证
		s2 = p2;
		while ((*s2 == *s1)&&(*s2 !='\0')&&(*s1!='\0'))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}
int main()
{
	char* p1 = "abcd";
	char* p2 = "cd";
	char* k=my_strstr(p1, p2);
	if ((k == NULL) || (k == p1))
		printf("找不到");
	else
		printf("%s", k);
	return 0;
}