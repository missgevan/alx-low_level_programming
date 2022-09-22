#include "main.h"

/**
 * _strncpy - A function that copies a string
 * Function works exactly as strncpy
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied
 *
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0 ; ((x < n) && (src[x] != '\0')) ; x++)
		dest[x] = src[x];

	for ( ; x < n ; x++)
		dest[x] = '\0';

	return (dest);
}
