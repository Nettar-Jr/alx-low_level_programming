#include "main.h"

/**
 * _pow_recursion - x raised to the power of y
 *
 * @x: the nunber
 * @y: the power
 *
 * Return: x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
