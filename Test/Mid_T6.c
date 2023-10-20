#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
static int sum;

int calFruit(int n)
{
	// 코드 작성
	while (n > 0)
	{
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}

int main(void) //변경하지 말라
{
	int n;
	scanf("%d", &n);
	sum = n;
	printf("%d\n", calFruit(n));
}
