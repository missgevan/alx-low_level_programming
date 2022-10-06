#include "main.h"
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int x, y, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum = sum + atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}

