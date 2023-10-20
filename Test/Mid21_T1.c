#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void initArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

void turnArray(int array1[], int array2[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (i == 0)
			array2[i] = array1[size - 1];
		else
			array2[i] = array1[i - 1];
	}
}

int main(void)
{
	int arr1[5];
	int arr2[5];

	initArray(arr1, 5);
	turnArray(arr1, arr2, 5);
	printArray(arr2, 5);

	return 0;
}
