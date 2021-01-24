#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
long long int fib(int n)
{
	if (n < 3) 
		return 1;
	else
		return fib(n-1)+fib(n-2);
}
int main() {
	int n = 0;
	int a;
	scanf("%d", &a);
	n = fib(a);
	printf("%lld", n);
	return 0;
}