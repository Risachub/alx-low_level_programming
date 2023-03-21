#include "main.h"

/**
  *main - entry point
  *Description: 'a function that prints 10 times the alphabet, in lowercase'
  *Return: always 0
  */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
