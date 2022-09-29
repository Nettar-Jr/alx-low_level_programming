#include "main.h"

/**
 * _sqrt - returns square root of a number
 *
 * @i: int to test
 * @n: number to calculate
 *
 * Return: n
 */

int _sqrt(int i, int n)
{
	if (i > n / 2)
		return (-1);

	else if (i * i == n)
		return (i);

	return (_sqrt(i + 1, n));
}

/**
 * _sqrt_recursion - calculate square roor of a number
 *
 * @n: number to Calculate
 *
 * Return: n
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}
