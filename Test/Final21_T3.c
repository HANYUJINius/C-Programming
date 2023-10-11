#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void seperateScore(int score[], int std, int size);
void printArr(int score[], int size);

int main(void)
{
	int i, n, std;
	int score[20];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &score[i]);

	scanf("%d", &std);

	seperateScore(score, std, n);

	return 0;
}

void seperateScore(int score[], int std, int size)
{
	int i, minIndex = 0, maxIndex = 0;
	int minArr[20];
	int maxArr[20];

	for (i = 0; i < size; i++)
	{
		if (score[i] < std)
			minArr[minIndex++] = score[i];
		else
			maxArr[maxIndex++] = score[i];
	}
	printArr(minArr, minIndex);
	printArr(maxArr, maxIndex);
}

void printArr(int score[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", score[i]);
	printf("\n");
}
