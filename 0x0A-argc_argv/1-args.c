#include <stdio.h>

/**
 * main - prints number of arguments
 *
 * @argc: number of arguments
 * @argv: array of pointers of all arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%u\n", argc - 1);

	return (0);
}
