#include "main.h"

/**
 * print_rev - A function that prints strings in reverse.
 * @s: String to be printed
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int s_rev = 0;
		while (s[s_rev] != '\0')
		{
			s_rev++;
		}
	s_rev--;
	while (s_rev >= 0)
	{
		_putchar(s[s_rev]);
	}
	_putchar('\n');
}
