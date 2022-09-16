#include "main.h"

/**
 * more_numbers - prints 0 - 9 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 58; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}

	_putchar('\n');
}
