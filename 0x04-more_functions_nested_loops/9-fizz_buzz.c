#include <stdio.h>

/**
 * main - Entry point
 * prints numbers, fizz, buzz or fizzbuzz
 *
 * Return: Void
 */

int main(void)
{
	int n;

	for (n = 1 ; n <= 100 ; n++)
		while (n < 101)

		{
			if (n % 3 == 0 && n % 5 == 0)
				printf("FizzBuzz");
			else if (n % 3 == 0)
				printf("Fizz");
			else if (n % 5 == 0)
				printf("Buzz");
			else
				printf(" %d", n);
			n++;
		}
	printf("\n");
	return (0);
}
