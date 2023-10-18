#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void delete(char s1[], char s2[])
{
	int i = 0, j = 0, k=0,l=0;
	char temp[30];

	for (l = 0; s1[l] != '\0'; l++);

	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s1[i] == s2[j]) 
			j++;
		else
			temp[k++] = s1[i];
		i++;

		if (k == l)
			break;
	}
	temp[k] = '\0';
	
	for (i = 0; temp[i] != '\0'; i++)
		s1[i] = temp[i];
	
	s1[i] = '\0';
}

int main(void)
{
	char s1[30], s2[30];
	int i, j;
	// 필요하면 변수 추가
	scanf("%s", s1);
	scanf("%s", s2);
	// 여기에 s1에서 s2를 제거하는 코드를 작성,
	// 필요하면 함수를 정의하고 이를 호출하여 프로그램해도 좋다. 
	delete(s1, s2);
	printf("%s\n", s1); // 변경하지 말라
}
