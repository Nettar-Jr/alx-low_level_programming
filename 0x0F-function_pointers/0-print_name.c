#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 *
 * @name: string to print
 * @f: pointer to funtion
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
