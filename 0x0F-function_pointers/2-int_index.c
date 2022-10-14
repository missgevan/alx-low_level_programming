#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: arrray elements
 * @size:  number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: index of the first element or -1 for no element match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		i = 0;
		while (i < size)
			i++;
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
