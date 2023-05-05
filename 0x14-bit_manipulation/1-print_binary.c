#include "main.h"

/**
  * print_binary - a function that prints the binary
  * representation of a number
  * @n: number to print
  * Return: the printed binary number
  */
void print_binary(unsigned long int n)
{
	unsigned long int rep;
	int f, add_up = 0;

	for (f = 63; f >= 0; f--)
	{
		rep = n >> f;

		if (rep & 1)
		{
			_putchar('1');
			add_up++;
		}
		else if (add_up)
			_putchar('0');
	}
	if (!add_up)
		_putchar('0');
}
