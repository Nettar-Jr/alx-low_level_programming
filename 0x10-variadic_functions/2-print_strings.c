#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints out arguments passed as string
 *
 * @separator: a comma to separate the string
 * @n: strings to be printed
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
