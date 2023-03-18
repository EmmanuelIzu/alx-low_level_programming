#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Checks for positive or negative number*/

/* betty style doc for function main goes there */
int main(void)
/*checks for positive negative and zero number */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}

	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
