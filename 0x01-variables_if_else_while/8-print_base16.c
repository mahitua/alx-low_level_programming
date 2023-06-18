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
	 putchar(ch + 48);
}
	 for (i = 1; i <= 7; i++)
{
	putchar(i + 97);
}
return (0);
}
