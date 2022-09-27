#include "main.h"
#include <string.h>

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: string to check
 * @accept: ...
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
