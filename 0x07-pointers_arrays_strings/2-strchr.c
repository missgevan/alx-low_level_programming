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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
		if (*s == c)
		{
			return (s);
		}
		return ('\0');
	}
}
