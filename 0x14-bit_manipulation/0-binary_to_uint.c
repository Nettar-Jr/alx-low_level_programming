#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - A function that convert binary to
 * unsigned int.
 *
 * @b: pointer to a string of ZEROs and ONEs
 *
 * Return: 0 => unsucessful | unsigned int => success
 */

unsigned int binary_to_uint(const char *b)
{
	/*holds converted binary*/
	unsigned int n;

	/*length of b and base two converted*/
	int len, base_converter;

	len = (strlen(b)) - 1;
	n = 0;
	base_converter = 1;

	if (!b)
		return (1);

	for (; len >= 0; len--, base_converter *= 2)
	{
		/*base_converter *= 2;*/

		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			n += base_converter;
		}
	}
	return (n);
}
