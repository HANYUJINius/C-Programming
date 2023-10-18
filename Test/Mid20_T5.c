#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void mergeStringOneByOne(char c[], char a[], char b[]) // 이 함수만 작성
{
	int i = 0, j = 0, k = 0;

	while (a[i] != '\0' || b[j] != '\0')
	{
		if (a[i] == '\0')
			c[k++] = b[j++];
		else if (b[j] == '\0')
			c[k++] = a[i++];
		else
		{
			c[k++] = a[i++];
			c[k++] = b[j++];
		}
	}
	c[k] = '\0';
}

int main(void) // 변경하지 말라
{
	char word1[10];
	char word2[10];
	char mergedWord[20];
	scanf("%s", word1);
	scanf("%s", word2);
	mergeStringOneByOne(mergedWord, word1, word2);
	printf("%s\n", mergedWord);
}
