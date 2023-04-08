#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: it counts the number of arguments
 * @argv: array of strings
 *
 * Return: success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
