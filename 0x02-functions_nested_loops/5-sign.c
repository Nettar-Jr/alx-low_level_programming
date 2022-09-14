#include "main.h"

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
		_putchar("+, %u", n);
		return (1);
	}
	else if (n == 0)
	{
		_putchar("0, %u", n);
		retunr (0);
	}
	else
	{
		_putchar("-, %u", n);
		retunr (-1);
	}
}
