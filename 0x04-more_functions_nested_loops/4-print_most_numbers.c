#include "main.h"
#include "stdio.h"

/**
 * print_most_numbers - prints numbers 1 - 9 except 2 & 4.
 *
 * Return: void
*/

void print_most_numbers(void)
{
	int i = 0;

	for (i = 48; i < 58; i++)
	{
		if ((i == 50) || (i == 52))
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
