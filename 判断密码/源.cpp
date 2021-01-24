#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
	int m = 0;
	scanf("%d", &m);
	char password[50] = { 0 };
	for (int i = 0; i < m; i++)
	{
		scanf("%s", password);
		int len = sizeof(password) / sizeof(password[0]);
		int a =0, b = 0 ,c=0,d = 0;
		for (int s = 0; s < len; s++)
		{
			if ( password[s] == '~' || password[s] == ' !' ||  password[s] =='@'|| password[s] == ' #' || password[s] == ' $' || password[s] == ' %')
				a = 1;
			if ('A' <= password[s] && password[s] <= 'Z')
				b = 1;
			if ('a' <= password[s] && password[s] <= 'z')
				c=1;
			if ('1' <= password[s] && password[s] <= '9')
				d=1;
		}
		if (a + b + c + d == 4)
			printf("YES\n");
		else
			printf("NO\n");
	}
}