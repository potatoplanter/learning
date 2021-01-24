#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*void move(char one, char two)
{
	printf("%c-->%c\n", one, two);

}*/
int hanoi(int x,char one,char two,char three)
{
	int count = 0;
	int i = 0;
	if (x == 1)
		/*move(one, three);*/
		count++;
	else
	{
		hanoi(x - 1, one, three, two);
		/*move(one, three);*/
		count++;
		hanoi(x - 1, two, three, one);
	}
	return count;
}

int main() {
	int a = 0;
	scanf("%d", &a);
	int count = hanoi(a, 'A', 'B', 'C');
	printf("%d", count);
}