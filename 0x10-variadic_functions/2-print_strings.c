#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator:  string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *ch;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		ch = va_arg(list, char *);
		if (ch == NULL)
			printf("(nil)");
		else
			printf("%s", ch);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
