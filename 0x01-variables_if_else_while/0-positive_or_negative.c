#include <stdlib.h>
#include <time.h>
/**
 * main - Printing whether a number is postive, zero or negative
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 0)
{
	printf("%1 is positive\n",n);
}
else if (n < 0)
{
	printf("%1 is negative\n",n);
}
else if (n == 0)
{
	printf("%1 is zero\n",n);
}
return (0);
}
