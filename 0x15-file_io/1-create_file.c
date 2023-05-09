#include "main.h"

/**
  * create_file - a function that creates a file
  * @filename: the name of the file to create
  * @text_content: is a NULL terminated string to write to the file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int w = 0;
	int textlength = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (textlength = 0; text_content[textlength];)
			textlength++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, textlength);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
