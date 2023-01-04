#include <stdio.h>

/**
 * before_mainFunc - prints a string before the 
 * execution of the main() function.
 *
 * Return: nothing.
 */
void before_main() __attribute__ ((constructor));

void before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
