#include "main.h"

/**
  * flip_bits - a function that returns the number of bits you
  * would need to flip to get from one number to another
  * @n: number 1
  * @m: number 2
  * Return: the number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int f, add_up = 0;
	unsigned long int outcome;
	unsigned long int complete = n ^ m;

	for (f = 63; f >= 0; f--)
	{
		outcome = complete >> f;
		if (outcome & 1)
			add_up++;
	}
	return (add_up);
}
