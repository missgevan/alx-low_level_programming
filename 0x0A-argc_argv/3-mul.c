#include "main.h"
#include <stdlib.h>

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: argument counte
 * @argv: argument vector
 *
 * Return: Result integer
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mult = (atoi(argv[1]) * atoi(argv[2]));
	printf("%d\n", mult);
	return (0);
}

