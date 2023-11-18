//LAB10_0_3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	char name[20];
	int midterm;
	int final;
};

int main(void)
{
	struct student s[3];
	struct student* sp = s;

	for (int i = 0; i < 3; i++)
	{
		printf("Enter student name: ");
		scanf("%s", (*sp).name);
		printf("Enter midterm and final score: ");
		scanf("%d %d",&(*sp).midterm, &(*sp).final);
		sp++;	//포인터 이동
	}

	sp = s;
	printf("\n이름\t중간\t학기말\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s\t%d\t%d\n", (*sp).name, (*sp).midterm, (*sp).final);
		sp++;
	}

	return 0;
}
