#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns a pointer
 *
 * @str: pointer to string
 *
 *Return: NULL if str is NULL.
 */

char *_strdup(char *str)
{
	char *s;

	unsigned int len, i;
	len = 0;

	if (str == NULL)
	{
		return (NULL);
	
	}

	while (str[len] != '\0')
	{
		len++;
	}

	s = malloc(sizeof(char) * (len + 1));

	/*check if malloc was successful*/

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}

	s[len] = '\0';

	return (s);
}
