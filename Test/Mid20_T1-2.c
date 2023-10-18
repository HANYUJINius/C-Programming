#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int printArray(int arr[][4], int size) // 변경하지 말라
{
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++)
			if (j < 3)
				printf("%d ", arr[i][j]);
			else
				printf("%d", arr[i][j]);
		printf("\n");
	}
}

void initArray(int a[][4], int size, int num) // 여기를 작성
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < 4; j++)
			a[i][j] = num * j + i;
}

int turnArray(int a[][4],int b[][4], int size)
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < 4; j++)
			b[i][j] = a[size-1-i][size-1-j];
}

int main(void) // 변경하지 말라
{
	int i, j;
	int a[4][4], b[4][4];
	int n;
	scanf("%d", &n);
	initArray(a, 4, n);
	turnArray(a, b, 4);
	printArray(b, 4);
}
