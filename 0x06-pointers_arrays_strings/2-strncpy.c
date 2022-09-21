#include "main.h"
#include <string.h>

/**
* _strncpy - copy one string into another
*
* @src: string to be copied
* @dest: desination of copied string
* @n: number of bytes from src
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
