//HW12_1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	FILE* fp1, * fp2, *fp3;
	
	srand(time(NULL));

	fp1 = fopen("random.txt", "w");
	if (fp1 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	for (int i = 0; i < 10; i++)
		fprintf(fp1, "%d\n", rand() % 100);

	fclose(fp1);

	//입력모드
	fp2 = fopen("random.txt", "r");
	if (fp2 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	//출력모드
	fp3 = fopen("output.txt", "w");
	if (fp3 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	//화면에 출력
	int num, sum = 0;
	fscanf(fp2, "%d", &num);
	while (!feof(fp2))
	{
		printf("%5d", num);
		fprintf(fp3, "%d\n", num);
		sum += num;
		fscanf(fp2, "%d", &num);
	}

	printf("\n합은 %d\n", sum);
	fprintf(fp3, "합은 %d", sum);

	fclose(fp2);
	fclose(fp3);

	return 0;
}
