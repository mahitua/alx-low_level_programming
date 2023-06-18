#include <stdio.h>
 /**
  * main- entry point
  * Description: '-prints all the numbers of base 16 in lowercase'
  * Return:  Always 0
  */
int main(void)
{
int i;
char ch;
for (ch = 0; ch <= 10; ch++)
{
for (i = 0; i <= 7; i++)
{
	putchar(i+48);
}
	putchar(i+97);
}
return (0);
}
