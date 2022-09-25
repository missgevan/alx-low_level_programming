#include "main.h"

/**
 * print_rev - A function that prints strings in reverse.
 * @s: String to be printed
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
