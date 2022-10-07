#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 *
 * Return: Pointer otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cs;
	unsigned int i, j, lens1 = 0, lens2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[lens1] != '\0')
		lens1++;
	while (s2[lens2] != '\0')
		lens2++;
	if (n >= lens2)
		n = lens2;
	cs = malloc(sizeof(char) * (lens1 + n + 1));
	if (cs == 0)
		return (0);
	for (i = 0 ; i < lens1 ; i++)
		cs[i] = s1[i];
	for (j = 0 ; j < n ; j++, i++)
		cs[i] = s2[j];
	cs[i] = '\0';
	return (cs);
}


