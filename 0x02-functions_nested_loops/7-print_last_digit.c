#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @r : number to check
 *
 * Return: Always 0
 */
int print_last_digit(int r)
{
	if (r > 0 || r == 0)
	{
		_putchar(r);
		return (r % 10);
	}
	else
	{
		_putchar(r);
		return (r * -1 % 10);
	}
}
