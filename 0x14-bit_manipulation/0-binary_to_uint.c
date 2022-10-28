#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, expo;
	int i;

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	if (b == NULL)
		return (0);

	for (sum = 0, expo = 1, i--; i >= 0; i--, expo *= 2)
	{
		if (b[i] == '1')
			sum += expo;
	}

	return (sum);
}
