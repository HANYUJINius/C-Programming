//LAB12_2_2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp, * fp2;
	char buf[30];

	fp = fopen("hello.txt", "r");
	if (fp == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fp2 = fopen("hello2.txt", "w");
	if (fp2 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	//입력파일에서 읽어 출력파일에 쓰기
	fgets(buf, sizeof(buf), fp);
	while (!feof(fp))
	{
		fputs(buf, fp2);
		fgets(buf, sizeof(buf), fp);
	}

	//다시 읽을 준비
	fseek(fp, 0, SEEK_SET);

	//입력파일에서 읽어 출력파일에 쓰기
	fgets(buf, sizeof(buf), fp);
	while (!feof(fp))
	{
		fputs(buf, fp2);
		fgets(buf, sizeof(buf), fp);
	}

	fclose(fp);
	fclose(fp2);

	return 0;
}
