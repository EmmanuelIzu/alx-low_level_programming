#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read file.
 * @filename: the text file
 * @letters: length of letters to be read
 * Return: the read file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffers;
	ssize_t file;
	ssize_t txt;
	ssize_t wr;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	txt = read(fd, buffer, letters);

	wr = write(STDOUT_FILENO, buffer, txt);

	free(buffers);

	close(file);

	return (wr);
}

