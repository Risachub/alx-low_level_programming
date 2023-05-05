#include "main.h"

/**
  * get_bit - a function that returns the value of a bit at
  * a given index
  * @n: number
  * @index: starting from 0 of the bit you want to get
  * Return: the value of the bit at index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int valuee;

	if (index > 63)
		return (-1);
	valuee = (n >> index) & 1;
	return (valuee);
}
