#include "main.h"

/**
 * _isalpha - Check for alphabet character
 *
 * @n : letter to be checked
 *
 * Return: 1 or 0
 */
int _isalpha(int n)
{
	if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
	{
		return (1);
	}
	return (0);
}
