#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0);
	n = rand() - RAND_MAX / 2;

	int a = n%10;

	if (n > 5)
	{
		printf("Last digit of %d is %u and is greater than 5", n, a);
	}
	else if (n < 6 || n != 0 )
	{
		printf("Last digit of %d is %u and is less than 6 and is not 0", n, a);
	}
	else
	{
		printf("Last digit of %d is %u and is 0", n, a);
	}

	return (0);
}
