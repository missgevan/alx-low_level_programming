#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string.
 * @s: Character pointer
 *
 * Return: Pointer
 */

char *cap_string(char *s)
{
	int x = 0, y;
	int sw[] = {32, '\t', 11, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;
	while (s[x] != '\0')
	{
		if (s[x] > 96 && s[x] < 123)
		{
		y = 0;
		while (y < 14)
		{
			if (s[x - 1] == sw[y])
			{
				s[x] -= 32;
				break;
			}
			y++;
		}
	}
	x++;
}
return (s);
}
