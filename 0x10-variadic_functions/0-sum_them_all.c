#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum up all intergers
 *
 * @n: number of arguments
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum = sum + num;
	}
	va_end(args);

	return (sum);
}
