#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function status
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int out, wrt, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		length = 0; 
		while (text_content[length])
			length++;
	}

	out = open(filename, O_WRONLY | O_APPEND);
	wrt = write(out, text_content, length);

	if (out == -1 || wrt == -1)
		return (-1);

	close(out);

	return (1);
}

