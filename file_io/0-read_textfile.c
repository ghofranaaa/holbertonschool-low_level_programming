#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
	/**
	 * read_textfile - a function that reads a text file and prints it .
	 * @filename: The path to the file.
	 * @letters: The number of letters.
	 *
	 * Return: returns the actual number of letters it could read and print.
	 */

	ssize_t
	read_textfile(const char *filename, size_t letters)
{
	int f;
	char *b;
	ssize_t b_r;
	ssize_t b_w;

	if (filename == NULL)
	{
		return (0);
	}

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
	{
		close(f);
		return (0);
	}

	b_r = read(f, b, letters);
	if (b_r == -1)
	{
		close(f);
		free(b);
		return (0);
	}

	b_w = write(STDOUT_FILENO, b, b_r);
	if (b_w != b_r)
	{
		close(f);
		free(b);
		return (0);
	}

	close(f);
	free(b);
	return (b_r);
}
