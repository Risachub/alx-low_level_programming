#include "main.h"
/**
  *main - entry point
  *Description: 'prints the alphabet, in lowercase,'
  *Return: always 0
  */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
