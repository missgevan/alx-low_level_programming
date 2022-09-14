#include "main.h"
/**
 * print_last_digit - Prints last digit of a number.
 * @n: value of last digit
 *
 * Return: Always 0 (LAST DIGIT)
 */
int print_last_digit(int n)
{
int _last_digit = n % 10;
if (_last_digit < 0)
	_last_digit = (_last_digit * -1);
{
_putchar(_last_digit + '0');
}
return (_last_digit);
}

