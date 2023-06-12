#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: pointer to file name.
 * @letters: number of letters the function should read and print.
 * Return: 0 for failure or no file name
 * or actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *save;

	if (filename == NULL)
	{
		return (0);
	}
	save = malloc(sizeof(char) * letters);
	if (save == NULL)
	{
		return (0);
	}
	r = read(o, save, letters);
	o = open(filename, O_RDONLY);
	w = write(STDOUT_FILENO, save, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(save);
		return (0);
	}

	free(save);
	close(o);
	return (w);
}
