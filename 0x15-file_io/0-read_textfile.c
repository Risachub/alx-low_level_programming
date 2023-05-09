#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - function that reads a text file
  * and prints it to the POSIX standard output
  * @filename: of the textfile
  * @letters: the number of letters it should read and print
  * Return: the actual number of letters it could read and print
  * if the file can not be opened or read, return 0...
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t w;
	ssize_t r;
	char *buffe;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffe = malloc(sizeof(char) * letters);
	r = read(fd, buffe, letters);
	w = write(STDOUT_FILENO, buffe, r);

	free(buffe);
	close(fd);
	return (w);
}
