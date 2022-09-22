#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * And returns a pointer to the resulting string dest
 * @dest: destination string
 * @src: source string
 *
 * Return: Resulting string
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	while (*(dest + x) != '\0')
	x++;
	while (*(src + y) != '\0')
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	return (dest);
}
