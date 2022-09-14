#include "main.h"
/**
 * _islower - Checks for a character.
 * @c: character used in function
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
