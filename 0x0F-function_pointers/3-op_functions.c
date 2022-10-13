#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *op_add - sums up two numbers
 *
 * @a: number one
 * @b: number two
 *
 * Return: sum.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - difference of two numbers
 *
 * @a: number one
 * @b: number two
 *
 * Return: difference.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers.
 *
 * @a: number one
 * @b: number two
 *
 * Return: product.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide of two numbers.
 *
 * @a: number one
 * @b: number two
 *
 * Return: quotient.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of division.
 *
 * @a: number onw
 * @b: number two
 *
 * Return: remainder.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
