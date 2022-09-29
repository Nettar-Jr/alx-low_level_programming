#include "main.h"

/**
 * _strlen - find the length of a string
 *
 * @s: string to be checked
 *
 * Return: s
 */

int _strlen(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen(s + 1);
	}
	return (len);
}

/**
 * find - finds a palindrome
 *
 * @s: string to check
 * @start: begining of string
 * @end: end of string
 * @ping: identify when string is palindrome
 *
 * Return: 0
 */

void find(char *s, int start, int end, int *ping)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*ping *= 1;
		else
			*ping *= 0;

		find(s, start + 1, end - 1, ping);
	}
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: string to check
 *
 * Return: 1 || 0
 */

int is_palindrome(char *s)
{
	int ping = 1;

	find(s, 0, _strlen(s) - 1, &ping);
	return (ping);
}
