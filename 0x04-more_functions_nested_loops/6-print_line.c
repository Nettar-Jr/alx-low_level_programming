#include "main.h"

/**
 * print_line - print line based on input
 *
 * @n : number of line
 *
 * Return: 0
 */

void print_line(int n)
{
	int i, j;

	for (i = 1; i <= n; ++i) {
		for (j = 1; j <= i; ++j) 
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
