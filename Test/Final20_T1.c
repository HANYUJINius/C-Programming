#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int addEach(int n) 
{
	if (n > 1)
		return n % 10 + addEach(n / 10);
}

int main(void) // 변경 금지
{
	int num;
	scanf("%d", &num);
	printf("%d\n", addEach(num));
}
