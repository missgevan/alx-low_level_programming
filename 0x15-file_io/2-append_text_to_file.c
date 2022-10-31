#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 * filename is NULL return -1
 * 1 if the file exists and -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
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

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, file);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
