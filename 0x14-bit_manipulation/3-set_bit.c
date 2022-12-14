#include "main.h"

/**
 * set_bit - sets bit value to 1
 * 
 * @n: decimal number.
 * @index: index to set.
 *
 * Return: 1 on success, -1 on error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;
	if (index > 63)
		return (-1);
	m = 1 << index;
	*n = (*n | m);
	return (1);
}
