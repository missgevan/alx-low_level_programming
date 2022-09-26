#include "main.h"

/**
 * _strcpy - Copies string
 * Similar to the function strcpy
 * @dest: destination of copied string
 * @src: source of string to be copied
 *
 * Return: Value of pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		src[x] = dest[x];
		x++;
	}
	dest[x] = src[x];
	return (dest);
}
