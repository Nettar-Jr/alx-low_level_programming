#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
 * main  - Entry Point
 *
 * Retunr: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%u is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%u is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
