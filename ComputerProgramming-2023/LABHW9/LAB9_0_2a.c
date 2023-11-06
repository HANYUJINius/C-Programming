//LAB9_0_2a
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c;
	printf("Enter characters(^Z for exit) :\n");
	c = getchar();
	while (c!=EOF)
	{
		if (isupper(c))
			putchar(tolower(c));
		else
			putchar(toupper(c));
		c = getchar();
	}
}
