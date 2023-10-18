#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int char_num(char* p, char c) // 이것을 작성, p의 값을 변경시키면서 함수를 정의
{
	int i, cnt=0;

	for (i = 0; *p != '\0'; i++)
	{
		if (*p == c)
			cnt++;
		p++;
	}
	return cnt;
}

int main(void) // 변경하지 말라
{
	char w[30];
	char* p;
	char ch;
	p = w;
	scanf("%c", &ch);
	scanf("%s", w);
	printf("%d\n", char_num(w, ch));
}
