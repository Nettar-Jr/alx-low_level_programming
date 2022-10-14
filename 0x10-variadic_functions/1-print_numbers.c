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
	int num;

	va_start(args, n);

	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		if (i == (n - 1))
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else
		{
			num =  va_arg(args, int);
			printf("%d", num);
			printf("%s", separator);
		}
	}

	printf("\n");
}
