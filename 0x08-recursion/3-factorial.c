#include "main.h"

/**
 * factorial - calculate the factorial of a number
 *
 * @n: number to culculate
 *
 * Return: n
 */

int factorial(int n)
{
	int i;

	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
	{
		i = factorial(n - 1);
		return (n * i);
	}
}
