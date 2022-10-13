#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main -check arguments
 *
 *@argc: number of argument
 *@argv: pointer to argument in string
 *
 * Return: 0 || 1
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0, calc = 0;

	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	s = argv[2][0];

	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	calc = (get_op_func(argv[2]))(a, b);

	printf("%d\n", calc);

	return (0);

}
