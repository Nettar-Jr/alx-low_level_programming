#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory to an array
 *
 * @b: size of array
 *
 * Return: pointer to array
 */

void *malloc_checked(unsigned int b)
{
	char *s = malloc(b);

	if (s == NULL)
	{
		free(s);
		printf("98");
	}
	return (s);
}
