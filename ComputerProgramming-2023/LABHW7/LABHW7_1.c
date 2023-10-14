//LABHW7_1(재귀)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n);

int main(void)
{
	int n;

	scanf("%d", &n);
	printf("\n%d\n", sum(n));

	return 0;
}

int sum(int n)
{
	int total = 0;
	int num = n * 10 + 2;

	if (n > 0)
	{
		total = num + sum(n - 1);
		printf("%d ", num);
	}
	return total;
}
