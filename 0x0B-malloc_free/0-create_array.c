#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars
 * And initializes it with a specific char
 * @size: size of array
 * @c: array of characters
 *
 * Return: A pointer to the array, ortherwise NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arrayc;

	if (size == 0)
		return (NULL);
	arrayc = malloc(sizeof(char) * size);
	if (arrayc == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		arrayc[i] = c;
	return (arrayc);
}
