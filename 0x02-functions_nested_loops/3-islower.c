#include "main.h"

/**
 * _islower - Check if letter is lowercase or uppercase
 *
 * @c: letter to be checked
 *
 * Return: 0 or 1
 **/
int _islower(int c)
{
	if  (c >= 'a' && c >= 'z')
		return (1);

	return (0);
}
