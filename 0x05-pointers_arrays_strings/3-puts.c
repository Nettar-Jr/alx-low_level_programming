#include "main.h"
#include <string.h>

/**
 ** _puts - prints out a string and \n
 ** @str : string to be printed
 *
 ** Return: 0
 */
void _puts(char *str)
{
	int i = 0;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
