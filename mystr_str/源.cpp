#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
#include<assert.h>
char* my_strstr(char* p1, char* p2)
{
	assert(p1 && p2);
	char* s1 = p1;//��ֹp1p2���޸�
	char* s2 = p2;
	char* cur = p1;//��¼��һ�ο�ʼ��֤��λ��
	if (*p2 == '/0')
	{
		return p1;
	}
	while (*cur)
	{
		s1 = cur;//���´���һ�ν���ѭ����һλ������֤
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
		printf("�Ҳ���");
	else
		printf("%s", k);
	return 0;
}