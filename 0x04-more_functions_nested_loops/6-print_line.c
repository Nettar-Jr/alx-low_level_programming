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
	for (;n > 0; n--)
		_putchar('_');
	_putchar('\n');
}
