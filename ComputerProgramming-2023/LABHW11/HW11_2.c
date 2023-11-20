//HW11_2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	char name[20];
	int midterm;
	int final;
	int average;
};

// typedef사용하여 Student 정의
typedef struct student Student;

struct cClass {
	int num;
	Student s[40];
};
// typedef사용하여 CClass 정의
typedef struct cClass CClass;

void printClass(CClass* c)
{
	for (int i = 0; i < c->num; i++)
	{
		printf("%s\t", c->s[i].name);
		printf("%d\t%d\t%d\n", c->s[i].midterm, c->s[i].final, c->s[i].average);
	}
}

void readClass(CClass* c)
{
	for (int i = 0; i < c->num; i++)
	{
		printf("Enter student name: ");
		scanf("%s", c->s[i].name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &c->s[i].midterm, &c->s[i].final);
	}
}

void calculateClassAverage(CClass* c)
{
	for (int i = 0; i < c->num; i++)
		c->s[i].average = (c->s[i].midterm + c->s[i].final) / 2;
}

int main(void)
{
	CClass cp;
	int i;
	Student all = { "Total", 0, 0, 0 };

	printf("Enter a number of student:");
	scanf("%d", &cp.num);

	readClass(&cp);

	calculateClassAverage(&cp);

	printf("\n이름\t중간\t학기말\t평균\n");
	printClass(&cp);

	return 0;
}
