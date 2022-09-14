#include "main.h"

/**
 * _abs - compute the absolute value of an int
 *
 * @r : letter to print
 *
 * Return: Always 0
 */
int _abs(int r)
{
	if (r > 0 || r == 0)
		return (r);
	else
		return (r * -1);
}
