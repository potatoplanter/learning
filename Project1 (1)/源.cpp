#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
# include<string.h>
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n))!= EOF)
//	{
//		int num[100000] = { 0 };
//		int count = 0;
//		for (int i = 1; i < n + 1; i++)
//		{
//			scanf("%d", &num[i]);
//		}
//		for (int i = 1; i < n; i++)
//		{
//			for (int j = i + 1; j < n + 1; j++)
//			{
//				if (num[i] > num[j])
//				{
//					count++;
//				}
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int temp = num;
//	int ws=0;
//	int dao[6] = { 0 };
//	while (num != 0)
//	{
//		num /= 10;
//		ws++;
//	}
//	for (int i = 0; i < ws; i++)
//	{
//		dao[i] = temp % 10;
//		temp /= 10;
//	}
//	printf("%d\n", ws);
//	for (int i = 0; i < ws; i++)
//	{
//		printf("%d", dao[i]);
//	}
//	return 0;
//}

//int main()
//{
//    char arr[100] = { 0 };
//    gets_s(arr);
//    int sz = strlen(arr);
//    for (int i = sz-1; i >= 0; i--)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}
void ecpt(char str[])
{
	int i = 0;
	next:
	while (str[i] != '@')
	{
		if (str[i] >= '0'&&str[i] <='6')/*(str[i] <= '6' && str[i] >= '0')*/
		{
			str[i] = str[i] + 3;
			if (str[i] > '6' && str[i] <= '9')
			{
				i++;
				goto next;
			}
		}
		else if (str[i] > '6' && str[i] <= '9')
		{
			str[i] = str[i] - 7;
		}
		i++;
	}
	puts(str);
}
int main()
{
	char str[1000];
	gets_s(str);
	ecpt(str);
	return 0;
}