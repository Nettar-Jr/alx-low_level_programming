#include <stdio.h>

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
	printf("This program was called with %s\n", argv[0]);

	return (0);
}
