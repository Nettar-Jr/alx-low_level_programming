#include "main.h"

/**
 * flip_bits - flip one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: on success, number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;
	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}
	return (nbits);
}
