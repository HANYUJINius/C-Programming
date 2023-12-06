#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isHalfSame(char* p1, char* p2) // 코드 작성
{
	int i;
	int sum = 0;
	int len = 0;

	len = strlen(p1);
	for (i = 0; *p1 != '\0'; i++)
	{
		if (*p1 != *p2)
			sum += 1;
		p1++;
		p2++;
	}

	if (len / 2 >= sum)
		return 1;
	return 0;
}

int main(void) 
{
	char str1[20], str2[20];
	int i;

	for (i = 0; i < 3; i++) {
		scanf("%s", str1);
		scanf("%s", str2);
		printf("%d\n", isHalfSame(str1, str2));
	}
}
