#include "main.h"

/**
 * main - A program that prints all arguments it recieves.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

