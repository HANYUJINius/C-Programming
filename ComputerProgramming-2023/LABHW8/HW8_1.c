//HW8_1
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int sumUpData(int*, int);
void printData(int*, int);
int maxData(int*, int);

void main()
{
	int k;
	int* p;
	int sum;

	int data[10];             // 계산 수행에 사용할 정적 변수

	p = data;                 //혹은 p = &data[0] 
  	srand(time(NULL));      // random 값 출력에 사용하는 함수. Seed 값을 부여

	for (k = 0; k < 10; k++)  // Index 0..9까지
		*p++ = rand() % 100;    // 데이터 초기화. 0부터 99까지의 Random 값을 출력. 

	sum = sumUpData(data, 10);
	printf("엘리먼트의 합은 %d\n", sum);

	printf("엘리먼트들은 ");
	printData(data, 10);

	printf("\n엘리먼트들 중 가장 큰수는 %d \n", maxData(data, 10));
}

int sumUpData(int* p, int size) // int p[]로 써도 된다
{
	int i;
	int sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += *p;
		p++;
	}
	return sum;
}

void printData(int* p, int size) // int p[]로 써도 된다
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", *p++);
}

int maxData(int* p, int size) // int p[]로 써도 된다
{
	int max = *p;
	int i;

	for (i = 0; i < size; i++)
	{
		if (max < *p)
			max = *p;
		p++;
	}
	return max;
}
