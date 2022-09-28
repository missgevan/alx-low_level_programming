#include "main.h"

/**
 * _strchr - A function that locates a character in a string.
 * Returns a pointer to the first occurrence of the character c in the string s
 * Or NULL if the character is not found.
 * @s: string searched
 * @c: character found
 *
 * Return: pointer or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int x = 0;

	for (; s[x] != '\0' ; x++)
		if (s[x] == c)
		{
			return (s + x);
		}
	if (s[x] == c)
	{
		return (s + x);
	}
	return (NULL);
}
