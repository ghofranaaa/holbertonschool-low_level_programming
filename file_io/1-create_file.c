#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - a function that creates a file.
 * @filename: name of the file.
 * @text_content: text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int w_b;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
		{
			length++;
		}

		w_b = write(f, text_content, length);
		if (w_b == -1)
		{
			close(f);
			return (-1);
		}
	}

	close(f);
	return (1);
}
