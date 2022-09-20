#include <stdio.h>
#include "main.h"

/**
 * print_array - print the n element in an arrray
 * @a : array to be printed
 * @n : number if elements to be printed
 * 
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n-1); i++)
	{
		printf("%d", a[i]);

		if (i != (n-1))
			printf(", ");
	}
	printf("\n");
}
