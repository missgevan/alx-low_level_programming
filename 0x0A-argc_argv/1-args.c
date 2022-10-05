#include <stdio.h>

/**
 * main - Prints number of arguments passed in it.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int number
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
