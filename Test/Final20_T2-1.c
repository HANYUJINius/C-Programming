#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int strToNum(char* s) 
{
	int num = 0;
	for (int i = 0; *s != '\0'; i++)
	{
		if (isalpha(*s))
			return 0;
		else
			num = (num * 10) + (*s - '0');
		s++;
	}
	return num;
}

int main(void) // main은 제공
{
	char str[50];

	scanf("%s", str);
	printf("%d\n", strToNum(str));
}
