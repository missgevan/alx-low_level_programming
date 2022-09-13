#include "main.h"
/**
 * main - Print the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 void
 */
void print_alphabet(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
