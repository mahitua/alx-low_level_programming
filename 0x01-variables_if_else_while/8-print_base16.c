#include <stdio.h>
/**
 * main - Entry point
 * Description: '-Print numbers of base 16 '
 * Return:  Always 0
 */
int main(void)
{
	int i;
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}

	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
