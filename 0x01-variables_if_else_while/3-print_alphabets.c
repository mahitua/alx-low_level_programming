#include <stdio.h>
/**
* main- entry point
* Description: '-print lowercase letters and upper case'
* Return:  Always 0
*/
int main(void)
{
int lowercase = 97;
int uppercase = 65;
while (lowercase <= 122)
{
	putchar(lowercase);
	lowercase++;
}
while (uppercase <= 90)
{
	putchar(uppercase);
	uppercase++;
}
putchar('\n');
return (0);
}
