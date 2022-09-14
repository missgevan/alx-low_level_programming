#include "main.h"
#include <stdlib.h>
/**
 * _abs - Computes the absolute value of an integer.
 * @x: an integer for which its absolute value is computed.
 *
 * Return: Always 0
 */
int _abs(int x)
{
if (x == 0 || x > 0)
{
return (x);
}
else
{
return (-1 * x);
}
}
