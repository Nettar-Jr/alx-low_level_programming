#include "main.h"
#include <string.h>

/**
 * _strpbrk - point to the first occurance of byte accept in string s
 *
 * @s: string to search from
 * @accept: string to search with
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
