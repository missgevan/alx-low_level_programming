#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: name character
 * @f: function pointer
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
