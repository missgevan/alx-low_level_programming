#include <stdio.h>
/**
 * main - Printing single digits with commas and spaces
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int sd;
for (sd = '0' ; sd <= '9' ; sd++)
{
if (sd != '9')
{
	putchar(sd);
{
	putchar(',');
	putchar(' ');
}
}
}
putchar('\n')
return (0)
}



