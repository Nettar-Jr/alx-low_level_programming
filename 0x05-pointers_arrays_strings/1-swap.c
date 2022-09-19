#include "main.h"

/**
 ** swap_int - swap the calue of two variable
 ** @a : First int
 ** @b : Second int
 *
 ** Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
