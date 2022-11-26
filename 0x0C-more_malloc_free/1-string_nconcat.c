#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - join two string
 *
 * @s1: destination string
 * @s2: source string
 *
 * @n: size of byte to take from source
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int len, i, j;
	int m = n;
	int len_s1 = strlen(s1); /*Lenght of string s1*/
	int len_s2 = strlen(s2); /*Length of string s2*/

	if (s2 == NULL)
		s2 = "";
	if (s2 == NULL)
		s1 = "";
	if (m < 0)
		return (NULL);
	if (m >= len_s2)
		m = len_s2;

	len = m + len_s1 + 1;
	s = malloc(sizeof(*s) * len);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < m; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';

	return (s);
}
