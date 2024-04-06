#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file and prints it .
 * @filename: The path to the file.
 * @letters: The number of letters.
 *
 * Return: returns the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	char *b;
	size_t b_r;
	size_t b_w;
if (filename == NULL)
{
	return (0);
}
f = fopen(filename, "r");
if (f == NULL)
{
	return (0);
}
b = (char *)malloc(sizeof(char) * (letters + 1));
if (b == NULL)
{
	fclose(f);
	free(b);
	return (0);
}
b_r = fread(b, sizeof(char), letters, f);
if (b_r == 0)
{
	fclose(f);
	free(b);
	return (0);
}

b[b_r] = '\0';
b_w = fwrite(b, sizeof(char), b_r, stdout);
if (b_w != b_r)
{
	fclose(f);
	free(b);
	return (0);
}
	fclose(f);
	free(b);
	return (b_r);
}
