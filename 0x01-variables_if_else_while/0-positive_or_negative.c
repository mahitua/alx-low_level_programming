#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there is the program will assign random number to n */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				if (n > 0)
				{
				printf("98 is positive\n");
				}
				else if (n == 0)
				{
				printf("0 is zero\n");
				}
				else if (n < 0)
				{
				printf("-98 is negative\n");
				}
				return (0);
				}
