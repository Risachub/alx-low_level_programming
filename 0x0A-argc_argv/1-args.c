#include "main.h"
#include <stdio.h>
/**
 * main -  a program that prints the num of args passed into it.
 * @argc: it counts the number of arguments
 * @argv: array of strings
 *
 * Return: Success
 */

int main(int argc, char *argv[])
{
(void) argv; /*it will Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
