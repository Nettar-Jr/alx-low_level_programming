#include "main.h"
#include <string.h>

/**
* _strcat - join two strings together
*
* @src: string will be taken from here
* @dest: string will be put here
*
* Return: 0
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
