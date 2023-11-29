//HW12_2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp1, * fp2;
	char ch;

	//입력모드
	fp1 = fopen("input.txt", "r");
	if (fp1 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	//출력모드
	fp2 = fopen("output.txt", "w");
	if (fp2 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	//대문자로 바꾸기
	while ((ch = getc(fp1)) != EOF)
	{
		if (islower(ch))
			putc(toupper(ch), fp2);
		else
			putc(ch, fp2);
	}
	fprintf(fp2, "\n"); //한 줄 띄우기 위함

	//포인터 앞으로 이동
	fseek(fp1, 0, SEEK_SET);

	//소문자로 바꾸기
	while ((ch = getc(fp1)) != EOF)
	{
		if (isupper(ch))
			putc(tolower(ch), fp2);
		else
			putc(ch, fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
