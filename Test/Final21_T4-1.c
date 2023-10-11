#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void chageToDigitEncoded(char s[], char e[]);

int main(void)
{
	char sentence[20], encoded[40];

	scanf("%s", sentence);
	chageToDigitEncoded(sentence, encoded);
	printf("%s\n", encoded);

	return 0;
}

void chageToDigitEncoded(char s[], char e[])
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'A' && s[i] <= 'I')
			e[i] = s[i] - 'A' + '1';

	e[i] = '\0';
}
