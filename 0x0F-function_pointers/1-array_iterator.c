#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a funtion
 *
 * @array: pointer to array
 * @size: size of the array
 * @action: function pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
