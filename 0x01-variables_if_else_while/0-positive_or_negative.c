#include <stdio.h>
#include <time.h>
#include <stdlib.h>`

/*
 * Main  - Entry Point
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
		printf("%u: is positive", n);
	}
	else if (n == 0)
	{
		printf("%u: is zero", n);
	}
	else
	{
		printf("%u: is negative", n);
	}

	return (0);
}
