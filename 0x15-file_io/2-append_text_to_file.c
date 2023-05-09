#include "main.h"

/**
  * append_text_to_file - a function that appends
  * text at the end of a file
  * @filename: the name of the file
  * @text_content: is a NULL terminated string to add
  * at the end of the file
  * Return: 1 on success, -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int textlength = 0;
	int w = 0;
	int q = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (textlength = 0; text_content[textlength];)
			textlength++;
	}
	q = open(filename, O_WRONLY | O_APPEND);
	w = write(q, text_content, textlength);

	if (q == -1 || w == -1)
		return (-1);

	close(q);

	return (1);
}
