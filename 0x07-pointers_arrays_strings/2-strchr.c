#include "main.h"
#include <string.h>

/**
 * _strchr - returns pointer to character c in string s
 *
 * @s: string to be checked
 * @c: character to search for
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	return	(strchr(s, c));
}
