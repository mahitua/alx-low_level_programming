#include <stdio.h>
/**
* main- entry point
* Description: 'prints the alphabet in lowercase'
* Return: Always 0
*/
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
	if (letter != 'q' && letter != 'e')
	{
		putchar(letter);
	}
	letter++;
}
putchar('\n');
return (0);
}
