#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the sum of multiples of 3 and 5 below 1024
 * Return: Always 0
 */
int main(void)
{
int n = 1;
int Sum = 0;

while (n < 1024)
{
	if (n % 3 == 0)
	Sum = (Sum + n);
	else if (n % 5 == 0)
		Sum = (Sum + n);

n++;
}
printf("%d\n", Sum);

return (0);
}
