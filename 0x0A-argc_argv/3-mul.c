#include <stdio.h>

/**
 * main - mutipley two argument
 *
 * @argc: number of argument
 * @argv: array of pointers to strin arguments
 *
 * Retrun: o
 */

int main(int argc, char *argv[])
{

	if (argc > 3 || argc < 2)
	{
		printf("Error\n");
		return(1);
	}
	else
	{

		printf("%d\n", (*argv[1] - '0') * (*argv[2] - '0'));
	}

	return (0);
}
