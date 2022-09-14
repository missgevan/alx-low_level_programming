#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase followed by a new line.
 *
 * Return:Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char c, x;
for (x = 0 ; x <= 9 ; x++)
{
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
