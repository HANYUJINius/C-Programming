#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 20

typedef struct {
	char name[MAX];
	int mid;
	int final;
	char grade;
} Student;

void printStudent(Student* m) 
{
	printf("%s %d %d %c\n", m->name, m->mid, m->final, m->grade);
}

void readNewStudent(Student* m, int* snPtr) 
{
	scanf("%s %d %d", m[*snPtr].name, &m[*snPtr].mid, &m[*snPtr].final);
	(*snPtr)++;
}

void calculateGrade(Student* m, int size) 
{

	for (int i = 0; i < size; i++)
	{
		int sum = 0;
		sum = m[i].mid + m[i].final;
		if (sum > 100)
			m[i].grade = 'A';
		else
			m[i].grade = 'F';
	}
}

int bestStudent(Student* m, int size)
{
	int max = m[0].mid + m[0].final;
	int idx = -1;

	for (int i = 0; i < size; i++)
	{
		if (m[i].mid + m[i].final > max)
		{
			max = m[i].mid + m[i].final;
			idx = i;
		}
	}
	return idx;
}

int main(void) 
{

	Student Students[MAX];
	int StudentNum = 0;
	int choice;

	scanf("%d", &choice);
	while (choice != -1) {
		readNewStudent(Students, &StudentNum); // 새 회원 정보를 읽어 들인다
		scanf("%d", &choice);
	}
	calculateGrade(Students, StudentNum); // 모든 학생의 학점을 계산
	printStudent(&Students[bestStudent(Students, StudentNum)]);
}
