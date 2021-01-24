#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int num[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(num) / sizeof(num[0]);
	for (int i = 0; i < sz; i++) {
		for (int j = 0; j <num[i]; j++) {
			printf("%d*%d=%2d ", num[i], num[j], num[i] * num[j]);
		}
		printf("\n");
	}
	}
