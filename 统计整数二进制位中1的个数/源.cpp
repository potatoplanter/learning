#define _CRT_SECURE_NO_WARNINGS 1
//ͳ������������λ��1�ĸ���
#include<stdio.h>
int main()
{
	while (1)
	{
		int a = 0;
		int count = 0;
		scanf("%d", &a);
		int i = 0;
		for (i = 0; i < 32; i++)
		{
			if (1 == ((a >> i) & 1))
			{
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}