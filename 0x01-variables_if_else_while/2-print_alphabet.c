#include <stdio.h>
/**
* main- entry point
* Description: '-print lowercase letters'
* Return:  Always 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
