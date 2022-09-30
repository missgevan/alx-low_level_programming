#include "main.h"

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number
 * @n: input integer
 *
 * Return: 1 or 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (a_prime_number(n, n - 1));
}

/**
 * a_prime_number - a function that returns 1
 * if the input integer is a prime number
 * @n: input integer
 * @i: dividend
 *
 * Return: 1 0r 0 otherwise
 */

int a_prime_number(int n, int i)
{
	if (n % i == 0 && n != i)
		return (0);
	if (i == 1)
		return (1);
	return (a_prime_number(n, i - 1));
}
