#include "main.h"

/**
 * _atoi - A function that convert a string to an integer
 * @s: string character
 *
 * Return: Integer of converted number
 */

int _atoi(char *s)
{
	int i, k;
	int j = 1;
	char c;
	unsigned int n;

	n = 0;
	i = 0;
	while (s[i] != '\0')
	{
		c = *(s + i);
			if (c == '-')
			{
				j = j * -1;
			}
		if (c >= '0' && c <= '9')
		{
			k = i;
			while (*(s + k) > 47 && *(s + k) < 58)
			{
				n = *(s + k) + (n * 10) - '0';
				k++;
			}
			break;
		}
		i++;
	}
	if (j < 0)
		n = n * j;
	return (n);
}


