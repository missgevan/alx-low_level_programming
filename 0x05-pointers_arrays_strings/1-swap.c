#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: first integer
 * @b: second integer
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
