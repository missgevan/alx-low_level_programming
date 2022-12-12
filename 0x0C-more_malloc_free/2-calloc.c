#include "main.h"
#include <stdlib>

/**
 * _calloc -  function that allocates memory for an array, using malloc
 * @nmemb: array elements
 * @size: size of memeory allocated
 *
 * Return: Returns pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
		return (m);
	for (i = 0; i < (nmemb * size); i++)
		m[i] = NULL;
	return (m);
}
