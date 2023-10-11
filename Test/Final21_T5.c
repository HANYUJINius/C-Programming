#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isHiddenPassword(char passwd[], char input[]);

int main(void)
{
	char passwd[20], input[20];
	int i;

	scanf("%s", passwd);
	for (i = 0; i < 3; i++)
	{
		scanf("%s", input);
		if (isHiddenPassword(passwd, input))
			printf("1");
		else
			printf("0");
	}
	printf("\n");

	return 0;
}

int isHiddenPassword(char passwd[], char input[])
{
	int i=0, j=0;

	while (passwd[i] != '\0' && input[j] != '\0')
	{
		if (passwd[i] == input[j])
			i++;
		j++;
	}
	
	if (passwd[i] == '\0')
		return 1;
	return 0;
}
