#include "main.h"

/**
 * create_file - Creates a new file file.
 * @filename: A pointer
 * @text_content: A pointer to a file
 * Return: return function status
 */
int create_file(const char *filename, char *text_content)
{
	int file, wrt, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length])
			length++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(file, text_content, length);

	if (file == -1 || wrt == -1)
		return (-1);

	close(file);

	return (1);
}

