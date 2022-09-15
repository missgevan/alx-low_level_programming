#include "main.h"
/**
 * jack_bauer - Prints every minutes starting from 00:00 to 23:59
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int m = 0;
	int h = 0;
	int M;
	int H;
while (H <= 23)
{
while (M <= 59)
{
	H = h % 10;
	M = m % 10
	_putchar(h / 10 + '0');
	_putchar(H + '0');
	_putchar(':');
	_putchar(m / 10 + '0');
	_putchar(M + '0');
	m++;
	_putchar('\n');
}
h++;
m = 0;
}
}
