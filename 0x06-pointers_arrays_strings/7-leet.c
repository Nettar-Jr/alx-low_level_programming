#include "main.h"

/**
 * leet - encodes strings to numbers
 *
 * @str: string to be encoded
 *
 * Return: 0;
 */

char *leet(char *str)
{
	int i = 0, j;
	char m[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (m[j] == str[i])
			{
				str[i] = n[j];
			}
		}
	}
	return (str);
}
