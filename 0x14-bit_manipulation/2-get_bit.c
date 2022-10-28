#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 *
 * Return: the value of the bit at index index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;


	if (index > 64)
		return (-1);

	num = n >> index;

	return (num & 1);
}
