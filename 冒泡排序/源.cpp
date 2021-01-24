#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void bubble_sort(int num[],int sz) 
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)//确定冒泡排序趟数
	{
		int j = 0;
		int flag = 1;//假设已经为升序
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (num[j] < num[j + 1])
			{
				int tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
				flag = 0;
			}
			if(flag==1)
			{
				break;
			}
		}

	}
}
int main() 
{
	int num[] = { 0 };
	int i = 0;
	while (scanf("%d", num[i]))
	{
		i++;
	}
	int sz = sizeof(num) / sizeof(num[0]);
	//bubble_sort(num,sz); 
	for (int n = 0; n < sz; n++)
	{
		printf("%d", num[n]);
	}
	return 0;
}
