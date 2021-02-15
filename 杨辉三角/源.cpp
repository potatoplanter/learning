#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void yanghui(int n)
{
	int tri[50][50] = { 0 };
	for (int i = 1; i < n; i++)
	{
		tri[i][1] = 1;
		tri[i][i] = 1;
	}
	if (n > 3)
	{
		for (int i = 3; i < n; i++)
		{
			for (int j = 2; j < n - 1; j++)
			{
				tri[i][j] = tri[i - 1][j] + tri[i - 1][j - 1];
			}
		}
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < i+1; j++)
		{
			if (j == i + 1)
				printf("%d", tri[i][j]);
			else
				printf("%d ", tri[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	while ((scanf("%d", &n))!=EOF)
	{
		yanghui(n+1);
		printf("\n");
	}
	return 0;
}