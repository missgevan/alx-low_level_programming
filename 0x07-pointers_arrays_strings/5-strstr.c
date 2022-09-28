#include "main.h"

/**
 * _strstr - A  function finds the first occurrence of the substring needle
 * In the string haystack
 * The terminating null bytes (\0) are not compared
 * @haystack: string to search
 * @needle: substring to compare
 *
 * Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

		for (x = 0 ; haystack[x] != '\0' ; x++)
		{
			for (y = 0 ; needle[y] != '\0' ; y++)
			{
				if (haystack[x + y] != needle[y])
				break;
			}
			if (!needle[y])
				return (haystack + x);
		}
		return (NULL);
}
