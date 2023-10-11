#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findWord(char s[], char word);

int main(void)
{
	char s[20];
	char key;

	scanf("%s %c", s, &key);

	printf("%d", findWord(s, key));

	return 0;
}

int findWord(char s[], char word)
{
	for (int i = 0; s[i] != '\0'; i++)
		if (s[i] == word)
			return i + 1;
	return -1;
}
