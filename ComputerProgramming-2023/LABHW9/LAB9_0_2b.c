//LAB9_0_2b
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main(void)
{
	char c;
	printf("Enter characters(^Z for exit) :\n");

	while ((c = fgetc(stdin)) != EOF)
	{
		if (isupper(c))
			putchar(tolower(c));
		else
			putchar(toupper(c));
	}
}
