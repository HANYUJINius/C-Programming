//LAB11_2_1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	char name[20];
	int midterm;
	int final;
	int average;
};

// typedef 를 사용하여 Student를 정의
typedef struct student Student;

void printStudent(Student* p)
{
	printf("%s\t", p->name);
	printf("%d\t%d\t%d\n", p->midterm, p->final, p->average);
}

void readStudentScore(Student* p)
{
	printf("Enter student name: ");					//a)
	scanf("%s", p->name);							//b)
	printf("Enter midterm and final score: ");		//c)
	scanf("%d %d", &p->midterm, &p->final);			//d)
}

void calculateStudentAverage(Student* p) 
{
	p->average = (p->midterm + p->final) / 2;		//e)
}

int main(void)
{
	Student s[40];
	Student* sp = s;
	int num, i;

	printf("Enter a number of student:");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		readStudentScore(sp);
		sp++;
	}

	sp = s;
	for (i = 0; i < num; i++)
	{
		calculateStudentAverage(sp);
		sp++;
	}

	sp = s;
	printf("\n이름\t중간\t학기말\t평균\n");
	for (i = 0; i < num; i++)
	{
		printStudent(sp);
		sp++;
	}

	return 0;
}
