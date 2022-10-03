#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * ispositive - a boolen function that checks if number is positve and a digit
 *
 * @str: strin to be checked if positive
 *
 * Return: true || false
 */

bool ispositive(char *str)
{
	int i;
	int length = strlen(str);

	if (str[0] == '-')
	{
		printf("Numbers must be positive\n");
		return false;
	}

	for (i = 0; i < length; i++)
	{
		if (!isdigit(str[i]))
		{
			printf("Error\n");
			return false;
		}
	}
	return true;
}
/**
 * main - Prints the sum of positive numbers
 *
 * @argc: number of arguments
 * @argv: array of pointers of string arguments
 *
 * Return: 0 || 1
 */

int main(int argc, char *argv[])
{
	int i;
	int total = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		if (!ispositive(argv[i]))
		{
			return (1);
		}
		else
		{
			total += atoi(argv[i]);
		}
	}
	printf("%d\n", total);
	return (0);

}
