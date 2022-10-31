#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename:  name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success,-1 on failure
 * (File cannot be written or created)
 */

int create_file(const char *filename, char *text_content)
{
	int file = 0;
	int o, w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (file = 0; text_content[file];)
			file++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, file);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
