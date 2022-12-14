#include "main.h"

/**
 * clear_bit - sets bit value to 0.
 *
 * @n: decimal number.
 * @index: position of the bit.
 *
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;
	if (index > 63)
		return (-1);
	m = 1 << index;
	if (*n & m)
		*n ^= m;
	return (1);
}
