#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int addEachEvenRec(int n) // 이 함수를 작성
{
	int sum = 0;

	if (n == 1)
		return 0;

	if ((n%10) % 2 == 0)
		return (n%10)+ addEachEvenRec(n / 10);
	else
		return addEachEvenRec(n / 10);
}

int main(void) // 변경하지 말라
{
	int num;
	scanf("%d", &num);
	printf("%d\n", addEachEvenRec(num));
}
