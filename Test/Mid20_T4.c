#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 10

int main(void)
{
	int a[NUMBER], b[NUMBER] = { 0 };
	int i;
	for (i = 0; i < NUMBER; i++)
		scanf("%d", &a[i]);
  
	// 여기에 코드 작성 b에 이웃 원소의 합을 넣는다
	for (i = 0; i < NUMBER; i++)
	{
		if (i - 1 < 0)
			b[i] = a[i + 1];
		else if (i + 1 >= NUMBER)
			b[i] = a[i - 1];
		else
			b[i] = a[i - 1] + a[i + 1];
	}

	for (i = 0; i < NUMBER; i++)
		printf("%d ", b[i]);
	printf("\n");
}
