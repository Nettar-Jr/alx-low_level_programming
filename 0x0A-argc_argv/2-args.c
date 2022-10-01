#include <stdio.h>

/**
 * main - print all argv arguments
 *
 * @argc: number of argument
 * @argv: array pointer to all argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
