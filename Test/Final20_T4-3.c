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

typedef struct {
	int num;
	Student s[40];
} CClass;

void readClass(CClass* cp)
{
	int choice;

	scanf("%d", &choice);
	while (choice != -1) {
		scanf("%s %d %d", cp->s[cp->num].name, &cp->s[cp->num].mid, &cp->s[cp->num].final);
		cp->num++;
		scanf("%d", &choice);
	}
}

void calculateClassGrade(CClass* cp)
{
	for (int i = 0; i < cp->num; i++)
	{
		int sum = 0;
		sum = cp->s[i].mid + cp->s[i].final;
		if (sum > 100)
			cp->s[i].grade = 'A';
		else
			cp->s[i].grade = 'F';
	}
}

printClass(CClass *cp)
{
	for (int i = 0; i < cp->num; i++)
		printf("%s %d %d %c\n", cp->s[i].name, cp->s[i].mid, cp->s[i].final, cp->s[i].grade);
}

int main(void)
{
	CClass cClass;

	cClass.num = 0; // 초기에는 학생수 0

	readClass(&cClass);
	calculateClassGrade(&cClass); // 학점 계산
	printClass(&cClass); // 학생 정보를 출력
}
