#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * You would need to flip to get from one number to another
 *
 * @n: number
 * @m: 2nd number to flip
 *
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 0;
	unsigned long int y = n ^ m;

	while (y)
	{
		x++;
		y &= (y - 1);
	}

	return (x);
}

