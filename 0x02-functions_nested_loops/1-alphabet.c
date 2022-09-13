#include "main.h"

/**
 * main - Entry point
 *
 * Retrun: Always 0 (success)
 *
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
