#include "main.h"

/**
 * _memcpy - The _memcpy() function copies n bytes
 * from memory area src to memory area dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of memory bytes to be copied
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
		dest[x] = src[x];

	return (dest);
}
