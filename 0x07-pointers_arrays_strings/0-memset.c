#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with constant byte
 *
 * @s: pointer in memory to start
 * @b: Value to be inserted
 * @n: number of bytes
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
