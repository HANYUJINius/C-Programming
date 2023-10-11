#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isSosu(int num);

int main(void)
{
    int num, k, sum=0;

    while (1)
    {
        scanf("%d", &num);

        if (num == -1)
            break;

        k = isSosu(num);

        if (k)
            sum += k;
    }
    printf("%d", sum);
    return 0;
}

int isSosu(int num)
{
    int i;

    for (i = 2; i < num; i++)
        if (num % i == 0)
            break;
    if (num == i)
        return num;
    return 0;
}
