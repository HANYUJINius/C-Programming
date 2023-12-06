#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution(char* s, int n) 
{
	char arr[50];
	int i,j;
	int num = 0;
	int answer = 0;

	strcpy(arr, "");

	for (i = 0; s[i] != '\0';  )
	{
		for (j = 0; j < n; j++)
		{
			arr[j] = s[i++];
			if (s[i] == '\0')
			{
				arr[++j] = '\0';
				num = atoi(arr);
				answer += num;
				return answer;
			}
		}
		arr[j] = '\0';
		num = atoi(arr);
		answer += num;
	}
	return answer;
}

int main(void)
{
	char s[50];
	int num;

	scanf("%s", s);
	scanf("%d", &num);
	printf("%d\n", solution(s, num));

	return 0;
}
