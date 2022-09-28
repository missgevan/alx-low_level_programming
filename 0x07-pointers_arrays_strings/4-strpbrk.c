#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * The function locates the first occurrence in the string s
 * Of any of the bytes in the string accept
 * Returns a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 * @s: string pointer
 * @accept: matches set of bytes
 *
 * Return: Pointer in s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		for (y = 0 ; accept[y] != '\0' ; y++)
		{
			if (s[x] == accept[y])
				return (s + x);
		}
	}
	return (NULL);
}
