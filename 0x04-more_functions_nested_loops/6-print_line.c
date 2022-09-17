#include "main.h"

/**
 * print_line - drawing a straight line
 * @n: the number of times the character '_' will be printed
 *
 * Return: Void
 */

void print_line(int n)
{
	if (n > 0)
		while (n-- > 0)
		{
			_putchar('_');
		}
	_putchar('\n');
}
