#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to file name to create
 * @text_content: pointer to string to write to file
 * Return: 1 for success, or -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, text_len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len];)
		{
			text_len++;
		}
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, text_len);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);

	return (1);
}
