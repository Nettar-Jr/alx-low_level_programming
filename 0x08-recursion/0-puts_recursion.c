#include "main.h"
#include <string.h>

/**
 * _put_recursion - prints out a string
 *
 * @s: string to print
 *
 * Return: 0
 */



void _puts_recursion(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
