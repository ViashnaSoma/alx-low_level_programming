#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for the buffer.
 * @file: file name that the buffer is storing chars for
 * Return: pointer to new buffer.
 */

char *create_buffer(char *file)
{
	char *save;

	save = malloc(sizeof(char) * 1024);

	if (save == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (save);
}

/**
 * close_file - closes the file descriptors.
 * @fd: file descriptor that needs to be closed
 */

void close_file(int fd)
{
	int check;

	check = close(fd);

	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies contents from one file to another file
 * @argc: number of arguments given
 * @argv: array of pointers to arguments
 * Return: 0 for success.
 * If argument count is incorrect - exit code 97.
 * If file_from does not exist or cant be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cant be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int start, finish, r, w;
	char *save;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	save = create_buffer(argv[2]);
	start = open(argv[1], O_RDONLY);
	r = read(start, save, 1024);
	finish = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (start == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(save);
			exit(98);
		}

		w = write(finish, save, r);
		if (finish == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(save);
			exit(99);
		}

		r = read(start, save, 1024);
		finish = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(save);
	close_file(start);
	close_file(finish);

	return (0);
}
