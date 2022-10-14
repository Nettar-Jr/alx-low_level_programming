#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print out numbers with character inbetween
 *
 * @separator: number separator (comma)
 * @n: number of arg to be printed
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n && n != 0; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
