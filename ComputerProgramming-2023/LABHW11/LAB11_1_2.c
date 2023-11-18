//LAB11_1_2
#include <stdio.h>
#include <stdlib.h>

// 1)typedef으로 구조체 타입 Score 정의
typedef struct {
	int midterm;
	int final;
}Score;

void printScore(Score *p) //2)
{
	printf("중간고사 성적은 %d\n", p->midterm);
	printf("학기말고사 성적은 %d\n", p->final);
}

Score *biggerScore(Score *p1, Score *p2) //3)
{
	if ((p1->midterm + p1->final) > (p2->midterm + p2->final))
		return p1;
	return p2;
}

void totalScore(Score *p1, Score *p2, Score *tp) //4)
{
	tp->midterm = p1->midterm + p2->midterm;
	tp->final = p1->final + p2->final;
}

Score createScore(int m, int f) //5)
{
	Score result;
	result.midterm = m;
	result.final = f;

	return result;
}

int main(void) {
	Score s1, s2, temp;

	s1.midterm = 50; s1.final = 100;
	s2.midterm = 70; s2.final = 70;

	printf("1)-----------------------------\n");
	printScore(&s1);
	printScore(&s2);

	printf("2)-----------------------------\n");
	printf("둘중 성적이 좋은 점수:\n");
	printScore(biggerScore(&s1, &s2));

	printf("3)-----------------------------\n");
	printf("두 성적의 총 합:\n");
	totalScore(&s1, &s2, &temp);
	printScore(&temp);

	printf("4)-----------------------------\n");
	temp = createScore(99, 99);
	printScore(&temp);
}
