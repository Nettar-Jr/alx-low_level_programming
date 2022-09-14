#include "main.h"
#include <stdio.h>

/**
 * print_sign - Print the sign of a number
 *
 * @n : letter to print
 *
 * Retunr: 0, 1, or -1
 */
int print_sign(int n)
{
	if(n > 0)
	{
		printf("+, %u", n);
		return (1);
	}
	else if (n == 0)
	{
		printf("0, %u", n);
		return (0);
	}
	else
	{
		printf("-, %u", n);
		retunr (-1);
	}
	return ();
}
