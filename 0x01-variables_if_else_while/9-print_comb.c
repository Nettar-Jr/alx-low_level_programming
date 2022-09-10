#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '10');
		if (n == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	
	return (0);
}
