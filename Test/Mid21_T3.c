#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
static int arr[100];
static int cnt = 0;

int eachDigits(int n)
{
	if (n > 0)
	{
		cnt  = n % 10 + eachDigits(n / 10);
		printf("%d ", n % 10 );
	}
	return cnt;
}

int main(void) // 변경하지 말라
{
	int num;
	scanf("%d", &num);
	printf("\n%d\n", eachDigits(num));
}
