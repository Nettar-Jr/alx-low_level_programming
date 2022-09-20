#include "main.h"
#include <string.h>

/**
 * puts2 - prints out other characters of a string
 * @str : string from which characters will be printer
 *
 * Return: 0
 */

void puts2(char *str)
{

	int i = 0;

	for (; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
