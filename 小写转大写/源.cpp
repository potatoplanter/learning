#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int ch = 0;
	ch = getchar();
	while (ch <= 'z' && ch >= 'a') {
		ch = ch - 32;
		printf("%c", ch);
	}
	return 0;
}