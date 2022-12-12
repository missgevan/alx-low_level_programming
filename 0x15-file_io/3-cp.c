#include "main.h"
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int f1, f2, c1, c2, r;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 < 0)
	{
		printf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((r = read(f1, buffer, 1024)) > 0)
	{
		if (f2 < 0 || (write(f2, buffer, r) != r))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c1 = close(f1);
	if (c1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f1), exit(100);
	}
	c2 = close(f2);
	if (c2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f2), exit(100);
	}
	return (0);
}
