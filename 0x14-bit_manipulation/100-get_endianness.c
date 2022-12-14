#include "main.h"

/**
 * get_endianness - get endianness
 *
 * Return: 0 == big endian, 1 == little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;
	x = 1;
	c = (char *) &x;
	return ((int)*c);
}
