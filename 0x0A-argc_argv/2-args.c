#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints all arguments it receives
 * @argc: it counts the number of arguments
 * @argv: array of strings
 *
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
