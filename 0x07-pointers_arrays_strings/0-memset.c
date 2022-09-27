#include "main.h"

/**
 * _memset - A function that fills the first n bytes
 * Of the memory area pointed to by s
 * With the constant byte b
 * @s: pointer character
 * @b: constant byte
 * @n: first number of bytes
 *
 * Return: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
		s[x] = b;

	return (s);
}
