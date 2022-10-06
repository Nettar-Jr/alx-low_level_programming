#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concat two strings
 *
 * @s1: strign to concat
 * @s2: string to concat
 *
 * Return: pointer to concated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, size, i, j;
	char *nstr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	size = len1 + len2;
	nstr = malloc((sizeof(char) * size) + 1);

	if (nstr == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		nstr[i] = s1[i];
		i++;
	}

	j = 0;
	while (i <= size)
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	return (nstr);
}
