#include <stdio.h>
#include "main.h"

void print_char(char *s);

/**
 * main - print firts argument
 *
 * @argc: number of arguments
 * @argv: array of pointers to argc arguemnts
 *
 * Return: 0
 */

int main(int argc  __attribute__((unused)), char *argv[])
{
	print_char(argv[0]);
	putchar('\n');

	return (0);
}

/**
 * print_char -  print chars of string
 *
 * @s: string to be printed
 *
 * Return: 0
 */

void print_char(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
}
