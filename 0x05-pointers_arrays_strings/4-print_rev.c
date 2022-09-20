#include "main.h"
#include <string.h>

/**
 * print_rev - print out a string in reverse
 * @s : string to be printed out
 *
 * Retrun: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])

		i++;

	while (i--)

		_putchar(s[i]);

	_putchar('\n');
}
