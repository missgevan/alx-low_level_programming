# include "main.h"

/**
 * _strcmp - Afunction that compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: An integer
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0, y;

	while (s1[x] == s2[x] && s1[x] != '\0')
		x++;

	y = s1[x] - s2[x];
	return (y);
}
