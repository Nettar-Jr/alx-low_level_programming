#include "main.h"
#include <string.h>

/**
 * _memcpy - copy from one memory area to another.
 *
 * @src: where to copy from
 * @dest: where to copy to
 * @n: number of byte to cpopy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
