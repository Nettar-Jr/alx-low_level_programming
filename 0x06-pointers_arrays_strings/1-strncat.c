#include "main.h"
#include <string.h>

/**
* _strncat - concatinate two strings
* @dest: where string will be added
* @src: where string will be taken
* @n: number of bytes to take from src
*
* Return: 1;
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
