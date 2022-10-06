#include "main.h"
#include <stdlib.h>

/**
 * main -  the minimum number of coins
 * to make change for an ammount of money
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 Success
 */

int main(int argc, char *argv[])
{
	int coins, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	coins = atoi(argv[1]);
	while (coins > 0)
	{
		if (coins >= 25)
		coins = coins - 25;
		else if (coins >= 10)
		coins -= 10;
		else if (coins >= 5)
		coins -= 5;
		else if (coins >= 2)
		coins -= 2;
		else if (coins >= 1)
		coins -= 1;
		change = change + 1;
	}
	printf("%d\n", change);
	return (0);
}

