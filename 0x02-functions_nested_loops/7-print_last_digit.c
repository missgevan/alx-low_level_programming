#include "main.h"
/**
 * print_last_digit - Prints last digit of a number.
 * @n: value of last digit
 *
 * Return: Always 0 (LAST DIGIT)
 */
int print_last_digit(int n)
{
int ld;
int ld = n % 10;
if (ld < 0)
{
_putchar(ld + '0');
}
return (ld);
}

