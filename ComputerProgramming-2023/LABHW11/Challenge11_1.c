//challenge11_1
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

void printClass(CClass* cp)
{
	for (int i = 0; i < cp->num; i++)
	{
		printf("%s\t", cp->s[i].name);
		printf("%d\t%d\t%d\n", cp->s[i].midterm, cp->s[i].final, cp->s[i].average);
	}
}

void readClass(CClass* cp)
{
	for (int i = 0; i < cp->num; i++)
	{
		printf("Enter student name: ");
		scanf("%s", cp->s[i].name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &cp->s[i].midterm, &cp->s[i].final);
	}
}

void calculateClassAverage(CClass* cp)
{
	for (int i = 0; i < cp->num; i++)
		cp->s[i].average = (cp->s[i].midterm + cp->s[i].final) / 2;
}

void calculateAll(CClass* cp, Student* pAll)
{
	int midSum = 0, finalSum = 0, averageSum = 0;
	for (int i = 0; i < cp->num; i++)
	{
		midSum += cp->s[i].midterm;
		finalSum += cp->s[i].final;
		averageSum += cp->s[i].average;
	}

	pAll->midterm = midSum / cp->num;
	pAll->final = finalSum / cp->num;
	pAll->average = averageSum / cp->num;
}

void printStudent(Student* pAll)
{
	printf("%s\t%d\t%d\t%d\n", pAll->name, pAll->midterm, pAll->final, pAll->average);
}

int main(void)
{
	CClass cp;
	Student all = { "All", 0, 0, 0 };

	printf("Enter a number of student:");
	scanf("%d", &cp.num);

	readClass(&cp);

	calculateClassAverage(&cp);

	printf("\n이름\t중간\t학기말\t평균\n");
	printClass(&cp);

	calculateAll(&cp, &all);
	printf("----------------------------------\n");
	printStudent(&all);

	return 0;
}
