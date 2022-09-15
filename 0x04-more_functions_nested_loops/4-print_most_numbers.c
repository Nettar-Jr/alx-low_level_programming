#include "main.h"

/**
 * print_most_numbers - prints numbers 1 - 9 except 2 & 4.
 *
 * Return: void
*/

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 || i != 4)
			putchar(i);

		i++;
	}
	_putchat('\n');
}
