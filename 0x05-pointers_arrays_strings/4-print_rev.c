#include "main.h"

/**
 * print_rev - A function that prints strings in reverse.
 * @s: String to be printed
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int i = 0, j;
	char *a, *b, c;

	i = *(s + i);
	a = s;
	b = s;

	for (j = 0; j < i - 1; j++)
		b++;
	for (j = 0; j < i / 2; j++)
	{
		c = *b;
		*b = *a;
		*a = c;
		{
			_putchar(*(s + i));
			a++;
			b--;
		}
	}
	_putchar('\n');
}
