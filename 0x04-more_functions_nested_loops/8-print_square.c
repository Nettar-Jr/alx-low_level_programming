#include "main.h"

/**
 **print_square - prints # as square based on n
 *
 **@size: size of square
 *
 **Return: void
 **/

void print_square(int size)
{
	int m, n;

	if (size > 0)
	{
		for (m = 0; m < size; m++)
		{
			for (n = 0; n < (size - 1); n++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
