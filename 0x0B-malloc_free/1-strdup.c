#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter
 * @str: string
 *
 * Return: Pointer to duplicate string otherwise null
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0, j;

	if (str == NULL)
		return (NULL);
	for (j = 0 ; str[j] != '\0' ; j++)
		i++;

	s = (char *)malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		s[j] = str[j];

	s[i] = '\0';
	return (s);
}

