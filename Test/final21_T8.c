#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int solution(int n)
{
	int jari = 0;
	while (n > 0)
	{
		n = n / 10;
		jari++;
	}
	return jari;
}

int main(void)
{
	int cnt = 0;
	int n;
	int num = 3;
	int rslt = 0;
	int tmp = 0;

	scanf("%d", &n);

	while (1)
	{
		cnt += solution(num);
		
		if (cnt >= n)
			break;
		num += 3;
	}
  
	rslt = cnt - n;
	if (rslt == 0)
	{
		printf("%d", num % 10);
		num = num / 10;
	}
	else if (rslt != 0)
	{
		for (int i = 0; i < rslt; i++)
		{
			num = num / 10;
			tmp = num % 10;
		}
		printf("%d", tmp);
	}
	return 0;
}
