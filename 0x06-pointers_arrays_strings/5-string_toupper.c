#include "main.h"

/**
 * string_toupper - A function that changes all lowercase letters
 * Of a string to uppercase.
 * @s: String pointer
 *
 * Return: Character pointer
 */

char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			s[x] = s[x] - 32;
		}
		x++;
	}
	return (s);
}
