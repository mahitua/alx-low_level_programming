#include <stdio.h>
  /**
  * main- entry point
  * Description:'print number of base 10 using putchar'
  * Return:  Always 0
  */
int main(void)
		{
		   int i;
		for (i = 0; i <= 9; i++)
		{
		putchar(i + 48);
		}
		putchar('\n');
		return (0);
}
