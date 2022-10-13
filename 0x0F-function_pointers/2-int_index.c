#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int
 *
 * @array: array to search from
 * @size: the size of the array
 * @cmp: function to compare
 *
 * Return: 0 || -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
