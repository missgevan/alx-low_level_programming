#include <stdio.h>
/**
 * main - Printing single digit base numbers without using char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = '0' ; i <= '9' ; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
