#include  "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: String to be printed
 *
 * Return: Void
 */

void _puts(char *str)
{
	int string_length = 0;

		while (*(str + string_length) != '\0')
		{
			_putchar(*(str + string_length));
			string_length++;
		}
		_putchar('\n');
}
