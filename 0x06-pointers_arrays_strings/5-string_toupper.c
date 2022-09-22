#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* string_toupper - a function that converts only lowercase string to uppercase
*
* @str: string to check an convert
*
* Return: 0
*/

char *string_toupper(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		int chtr = str[i];

		if ((chtr <= 122) && (chtr >= 97))
			str[i] = chtr - 32;
		else
			str[i] = str[i];
	}

	return (str);
}
