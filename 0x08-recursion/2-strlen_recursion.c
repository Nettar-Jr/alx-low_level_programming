#include "main.h"

/**
 * _strlen_recursion - print length string
 *
 * @s: string to print length
 *
 * Return: s
 */

int _strlen_recursion(char *s)
{
	int total = 0;

	if (*s != '\0')
	{
		total++;
		total += _strlen_recursion(s + 1);
	}
	return (total);
}
