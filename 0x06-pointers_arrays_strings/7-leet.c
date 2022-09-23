#include "main.h"

/**
 * leet - A function that encodes a string
 * @c: Character pointer
 *
 * Return: Character pointer
 */

char *leet(char *c)
{
	int i, j;

	char l[] = "aAeEoOtTlL";
	char r[] = "4433007711";

	i = 0;
	while (c[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
		if (c[i] == l[j])
		{
			c[i] = r[j];
		}
		j++;
	}
	i++;
}
	return (c);
}

