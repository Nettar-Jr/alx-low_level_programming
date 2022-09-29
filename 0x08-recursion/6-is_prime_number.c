#include "main.h"

/**
 * _prime - find prime number
 *
 * @n: nmber to check
 * @i: where to begin
 *
 * Return: n
 */

int _prime(int n, int i)
{
	if (i <= 1)
		return (1);
	else if (n % i == 0)
		return (0);

	return (_prime(n, i - 1));
}

/**
 * is_prime_number - returns the 1 if n is prime
 *
 * @n: number to check
 *
 * Return: 1 || 0
 */

int is_prime_number(int n)
{
	int i = n / 2;

	if (n <= 1)
		return (0);
	return (_prime(n, i));
}
