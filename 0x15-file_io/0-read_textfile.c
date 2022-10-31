#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * To the POSIX standard output.
 * @filename: name of file
 * @letters: number of letters
 *
 * Return:  actual number of letters it could read and print
 * file can not be opened or read, return 0
 * if filename is NULL or if write fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file;
	ssize_t o, r,  w;

	if (filename == NULL)
		return (0);

	file = malloc(sizeof(char) * letters);
	if (file == NULL)
	return (0);

	o = open(filename, O_RDONLY);
	r = read(o, file, letters);
	w = write(STDOUT_FILENO, file, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(file);
		return (0);
	}

	free(file);
	close(o);

	return (w);
}



