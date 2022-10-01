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
	printf("%s", argv[0]);
	putchar('\n');

	return (0);
}
