#include "main.h"

/**
 * _puts_recursion - A function that prints a string, followed by a new line
 * @s: string to be printed
 *
 * Return: Void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	{
		_putchar(*s);
		++s;
	}
	_putchar('\n');
}
