#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: A string whose length is returned
 *
 * Return: string_length
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (*(s + string_length) != '\0')
		string_length++;

	return (string_length);
}
