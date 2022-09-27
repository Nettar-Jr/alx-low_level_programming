#include "main.h"
#include <string.h>

/**
 * _strstr - find the occurance of needle in haystack
 *
 * @haystack: string to search from
 * @needle: string to search with
 *
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
