#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 * Returns the number of bytes in the initial segment of s
 * Which consist only of bytes from accept
 * @s: Initial segment string
 * @accept: char match
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0, i = 0, j;

	while (accept[num])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[num] == s[j])
			{
				i++;
			}
			j++;
		}
		num++;
	}
	return (i);
}
