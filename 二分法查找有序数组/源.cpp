#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <math.h>
int main() {
	int num[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,15,16 };
	int length = sizeof(num) / sizeof(num[0]);

	int k;
	double s = log2(length);
	if (int(s) == s)
		s = log2(length);
	else
		s = int(s) + 1;
	while (1) {
		int left = 0;//���±� 
		int right = length - 1;//���±�
		int mid = 0;
		int	i = 0;
		scanf("%d", &k);
		while (i<=s) {
			mid = (left + right) / 2;//�м�Ԫ���±�
			if (num[mid] > k)
				right = mid - 1;
			else if (num[mid] < k)
				left = mid + 1;
			else
				break;
			i++;
		}
		if(i>s)
			printf("�Ҳ���\n");
		else
		printf("%d\n", mid + 1);
	}
	return 0;
}
