#include "main.h"

/**
 * _strncat - A function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of characters
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (*(dest + x) != '\0')
		x++;
	while (y == n)
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	*(dest + x) = '\0';
	return (dest);
}
