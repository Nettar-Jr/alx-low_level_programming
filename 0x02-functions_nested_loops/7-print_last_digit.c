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
		return (r % 10);
	}
	else
	{
		return (r * -1 % 10);
	}
}
