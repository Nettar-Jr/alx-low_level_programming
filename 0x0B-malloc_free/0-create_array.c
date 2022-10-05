#include "main.h"
#include <stdlib.h>

/**
 * create_array - an array and initiallize it with a special char
 *
 * @size: size of array
 * @c: char
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(char) * size);

	if (ar == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
