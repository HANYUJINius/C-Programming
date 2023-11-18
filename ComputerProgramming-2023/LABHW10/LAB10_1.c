//LAB10_1
#include <stdio.h> 
#include <string.h>

struct customer {
	char name[40];
	int age;
};

int main(void)
{
	int i;
	struct customer aCustomer = { "ABC", 22 };
	struct customer cArray[2] = { {"DEF", 24}, {"GHI", 22} };

	struct customer* cp = &aCustomer;

	printf("Name = %s, Age = %d\n", cp->name, cp->age);

	cp = cArray;	//cp의 초기값 설정
	for (i = 0; i < 2; i++)
	{
		printf("Name = %s, Age = %d\n", cp->name, cp->age);
		cp++;
	}
		
	return 0;
}
