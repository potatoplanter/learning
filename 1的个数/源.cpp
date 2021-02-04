#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	
	while (scanf("%d", &n) != EOF)
	{
		int count = 0;
		for (i = 0; i <= n; i++)
		{
			int j = i;
			while (j >= 1)
			{
				if (j % 10 == 1)
				{
					count++;
				}
				j = j / 10;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}