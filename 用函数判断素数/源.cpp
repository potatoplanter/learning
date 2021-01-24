#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int judge(int x) {
	int a ,b=0;
	for (a = 2; a <= x / 2; a++) {
		if (x % a == 0)
			b = 1;
	}
	return b;
}
int main() {
	int num,b;
	while ((scanf("%d", &num)) != EOF) {
		b = judge(num);
		if (b == 1)
			printf("no\n");
		else
			printf("yes\n");
	}
	return 0;
}