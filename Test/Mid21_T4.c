#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int aboveAverageTotal(int* p, int size);

int aboveAverageTotal(int* p, int size)
{
	//여기를 pointer 표현으로 작성
	int sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		if (*p >= 50)
		{
			sum += *p;
			printf("%d ", *p);
		}
		p++;
	}
	return sum;
}

int main(void) // 변경하지 마라
{
	int i;
	int n;
	int data[20];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &data[i]);
	printf("\n%d\n", aboveAverageTotal(data, n));
}
