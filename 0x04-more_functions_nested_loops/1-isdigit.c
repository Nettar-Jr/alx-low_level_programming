#include "main.h"

/**
 * _isdigit - Check if a character is a digit or not
 *
 * @c : character to be checked
 *
 * Return: 0 || 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
