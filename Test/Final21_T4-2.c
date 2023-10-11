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
	int i,j=0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'I')
			e[j++] = s[i] - 'A' + '1';
		else if (s[i] >= 'J' && s[i] <= 'S')
		{
			e[j++] = '1';
			e[j++] = s[i] - 'J' + '0';
		}
		else if (s[i] >= 'T' && s[i] <= 'Z')
		{
			e[j++] = '2';
			e[j++] = s[i] - 'T' + '0';
		}
	}
	e[j] = '\0';
}
