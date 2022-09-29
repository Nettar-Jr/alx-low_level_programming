#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints out a string
 *
 * @s: string to print
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
