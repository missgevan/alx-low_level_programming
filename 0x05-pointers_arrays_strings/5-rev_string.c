#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: String to be reversed
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int a = 0, i, j;
	char c;

	while (*(s + a) != '\0')
	{
		a++;
	}
	j = a;
	a--;
	for (i = 0 ; i < (j / 2) ; i++)
	{
		c = *(s + i);
		*(s + i) = *(s + a);
		*(s + a) = c;
		a--;
	}
}
