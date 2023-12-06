#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution1(char* s)
{
	char arr[5];
	int sum = 0;

	strncpy(arr, s, 4);
	
	int num = atoi(arr);

	sum = num % 100;
	num = num / 100;
	sum += num;
	return sum;
}

int main(void)
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", solution1(s));

	return 0;
}
